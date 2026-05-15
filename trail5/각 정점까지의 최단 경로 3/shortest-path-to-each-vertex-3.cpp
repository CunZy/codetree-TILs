#include <iostream>
using namespace std;

int n, m;
int graph[101][101];
int source = 1;
int dist[101];
bool visit[101];

int main() {
    // Please write your code here.
    cin >> n >> m;

    for(int i = 0; i < m; ++i) {
        int x, y, v;
        cin >> x >> y >> v;
        graph[x][y] = v;
    }

    for(int i = 1; i <= n; ++i) {
        dist[i] = 100000;
    }

    dist[source] = 0;

    for(int i = 1; i <= n; ++i) {
        int idx = -1;

        for(int j = 1; j <= n; ++j) {
            if(visit[j]) continue;

            if(idx == -1 || dist[idx] > dist[j]) idx = j;
        }

        visit[idx] = true;

        for(int j = 1; j <= n; ++j) {
            if(graph[idx][j] == 0) continue;

            if(graph[idx][j] != 0) {
                int t = dist[idx] + graph[idx][j];
                dist[j] = min(dist[j], t);
            }
        }
    }

    for(int i = 2; i <= n; ++i) {
        if(dist[i] == 100000) dist[i] = -1;
        cout << dist[i] << endl;
    }

    return 0;
}