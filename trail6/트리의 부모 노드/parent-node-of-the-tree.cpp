#include <iostream>
#include <vector>
using namespace std;

#define MAX_N  100000

vector<int> graph[MAX_N + 1];
int n;
bool visited[MAX_N + 1];
int parent[MAX_N + 1];

void DFS(int idx) {
    for(int i = 0; i < graph[idx].size(); ++i) {
        int t = graph[idx][i];

        if(!visited[t]) {
            visited[t] = true;
            parent[t] = idx;
            DFS(t);
        }
    }
}

int main() {
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int s, e;
        cin >> s >> e;

        graph[s].push_back(e);
        graph[e].push_back(s);
    }


    visited[1] = true;
    DFS(1);

    for(int i = 2; i <= n; ++i) {
        cout << parent[i] << endl;
    }
}