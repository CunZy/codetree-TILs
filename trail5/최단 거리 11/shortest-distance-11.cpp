#include <iostream>
using namespace std;

#define MAX_N 1000

int graph[MAX_N + 1][MAX_N + 1];
int n, m;
int a, b;
bool visited[MAX_N + 1];
int dist[MAX_N + 1];

int main() {
    cin >> n >> m;

    for(int i = 0; i < m; ++i) {
        int s, e, v;
        cin >> s >> e >> v;

        graph[s][e] = v;
        graph[e][s] = v;
    }

    cin >> a >> b;


    for(int i = 1; i <= n; ++i) {
        dist[i] = (int)1e9;
    }
    dist[b] = 0;

    for(int i = 1; i <= n; ++i) {
        int min_idx = -1;

        for(int j = 1; j <= n; ++j) {
            if(visited[j]) continue;

            if(min_idx == -1 || dist[min_idx] > dist[j]) min_idx = j;
        }

        visited[min_idx] = true;

        for(int j = 1; j <= n; ++j) {
            if(graph[min_idx][j] == 0) continue;

            int t = graph[min_idx][j] + dist[min_idx];

            if(t < dist[j]) {
                dist[j] = t;
            }
        }
    }

    cout << dist[a] << endl;

    int x = a;
    cout << a << " ";

    while(x != b) {
        for(int i = 1; i <= n; ++i) {
            if(graph[i][x] == 0) continue;

            if(dist[i] + graph[i][x] == dist[x]) {
                x = i;
                break;
            }
        }
        cout << x << " ";
    }
}