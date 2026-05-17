#include <iostream>
using namespace std;

#define MAX_N 1000

int n, m;
int a, b;
int dist[MAX_N + 1];
int graph[MAX_N + 1][MAX_N + 1];
bool visit[MAX_N + 1];

int main() {
    // Please write your code here.
    cin >> n >> m;

    for(int i = 0; i < m; ++i) {
        int x, y, edge;
        cin >> x >> y >> edge;

        graph[x][y] = edge;
        graph[y][x] = edge;
    }

    cin >> a >> b;

    for(int i = 1; i <= n; ++i) {
        dist[i] = (int)1e9;
    }
    dist[b] = 0;

    for(int i = 1; i <= n; ++i) {
        int min_idx = -1;
        for(int j = 1; j <= n; ++j) {
            if(visit[j]) continue;
            if(min_idx == -1 || dist[min_idx] > dist[j]) {
                min_idx = j;
            }
        }

        visit[min_idx] = true;

        for(int j = 1; j <= n; ++j) {
            if(graph[min_idx][j] == 0) continue;

            int edge = graph[min_idx][j];

            int new_dist = dist[min_idx] + edge;

            if(dist[j] > new_dist) {
                dist[j] = new_dist;
            }
        }
    }

    // for(int i = 1; i <= n; ++i) cout << dist[i] << " ";

    cout << dist[a] << endl;

    int x = a;
    cout << a << " ";

    while(x != b) {
        for(int i = 1; i <= n; ++i) {
            if(graph[i][x] == 0) continue;
            
            if(dist[i] + graph[i][x] == dist[x]) {
                x = i;
                // cout << x << " " << i << endl;
                break;
            }
        }
        cout << x << " ";
    }
    return 0;
}