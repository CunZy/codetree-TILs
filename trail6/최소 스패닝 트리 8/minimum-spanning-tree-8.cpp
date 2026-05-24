#include <iostream>
using namespace std;

#define MAX_N 500

int n, m;
int graph[MAX_N + 1][MAX_N + 1];
int visited[MAX_N + 1];
int dist[MAX_N + 1];

int main() {
    cin >> n >> m;

    for(int i = 0; i < m; ++i) {
        int s, e, v;
        cin >> s >> e >> v;
        if(graph[s][e] == 0) {
            graph[s][e] = v;
            graph[e][s] = v;
        }
        else {
            graph[s][e] = min(v, graph[s][e]);
            graph[e][s] = min(v, graph[e][s]);
        }
    }

    for(int i = 1; i <= n; ++i) {
        dist[i] = (int)1e9;
    }
    dist[1] = 0;

    int answer = 0;
    for(int i = 0; i < n; ++i) {
        int min_idx = -1;

        for(int j = 1; j <= n; ++j) {
            if(visited[j]) continue;

            if(min_idx == -1 || dist[min_idx] > dist[j]) min_idx = j;
        }

        visited[min_idx] = true;
        answer += dist[min_idx];

        for(int j = 1; j <= n; ++j) {
            if(graph[min_idx][j] == 0) continue;

            int t = graph[min_idx][j];
            dist[j] = min(dist[j], t);
        }
    }

    cout << answer << endl;
}