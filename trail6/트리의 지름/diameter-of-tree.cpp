#include <iostream>
#include <tuple>
#include <vector>
#include <climits>
using namespace std;

#define MAX_N 100000

vector<pair<int, int>> graph[MAX_N + 1];
int n;
bool visit[MAX_N + 1];
int dist[MAX_N + 1];

void DFS(int v) {
    for(int i = 0; i < graph[v].size(); ++i) {
        int cur, edge;
        tie(cur, edge) = graph[v][i];

        if(visit[cur]) continue;

        visit[cur] = true;
        dist[cur] = dist[v] + edge;
        DFS(cur);
    }
}

int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 0; i < n - 1; ++i) {
        int x, y, z;
        cin >> x >> y >> z;

        graph[x].push_back(make_pair(y, z));
        graph[y].push_back(make_pair(x, z));
    }

    visit[1] = true;
    dist[1] = 0;
    DFS(1);

    int max_idx = -1;
    for(int i = 1; i <= n; ++i) {
        if(max_idx == -1 || dist[max_idx] < dist[i]) max_idx = i;
    }

    for(int i = 1; i <= n; ++i) {
        visit[i] = false;
        dist[i] = 0;
    }

    visit[max_idx] = true;
    dist[max_idx] = 0;
    DFS(max_idx);

    int answer = INT_MIN;
    for(int i = 1; i <= n; ++i) {
        answer = max(answer, dist[i]);
    }
    cout << answer;
    return 0;
}