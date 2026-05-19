#include <iostream>
#include <vector>
using namespace std;

#define MAX_N 100000

int n;
vector<int> graph[MAX_N + 1];
bool visit[MAX_N + 1];
int parents[MAX_N + 1];

void DFS(int v) {
    for(int i = 0; i < graph[v].size(); ++i) {
        if(visit[graph[v][i]]) continue;

        visit[graph[v][i]] = true;
        parents[graph[v][i]] = v;
        DFS(graph[v][i]);
    }
}

int main() {
    // Please write your code here.
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;

        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    visit[1] = true;
    DFS(1);

    for(int i = 2; i <= n; ++i) {
        cout << parents[i] << endl;
    }
    return 0;
}