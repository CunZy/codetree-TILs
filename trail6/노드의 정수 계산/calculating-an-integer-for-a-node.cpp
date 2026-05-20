#include <iostream>
#include <vector>
using namespace std;

#define MAX_N 100000

vector<int> graph[MAX_N + 1];
int n;
bool visited[MAX_N + 1];
int dp[MAX_N + 1];
int value[MAX_N + 1];

void DFS(int idx) {
    for(int i = 0; i < graph[idx].size(); ++i) {
        int t = graph[idx][i];

        if(!visited[t]) {
            visited[t] = true;
            DFS(t);
        }
    }
    
    int sum_child = 0;
    for(int i = 0; i < graph[idx].size(); ++i) {
        if(value[graph[idx][i]] > 0) sum_child += value[graph[idx][i]];
    }
    value[idx] += sum_child;
}

int main() {
    cin >> n;

    for(int i = 2; i <= n; ++i) {
        int t, a, p;
        cin >> t >> a >> p;

        if(t == 1) {
            value[i] = a;
            graph[p].push_back(i);
        }
        else {
            value[i] = -a;
            graph[p].push_back(i);
        }
    }

    visited[1] = true;
    DFS(1);
    cout << value[1];
}