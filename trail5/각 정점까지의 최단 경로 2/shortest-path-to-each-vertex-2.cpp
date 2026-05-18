#include <iostream>
using namespace std;

#define MAX_N 100

int n, m;
int graph[MAX_N + 1][MAX_N + 1];

int main() {
    cin >> n >> m;

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            graph[i][j] = (int)1e9;
        }
        graph[i][i] = 0;
    }

    for(int i = 0; i < m; ++i) {
        int s, e, v;
        cin >> s >> e >> v;
        graph[s][e] = min(graph[s][e], v);
    }

    for(int k = 1; k <= n; ++k) {
        for(int i = 1; i <= n; ++i) {
            for(int j = 1; j <= n; ++j) {
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
            }
        }
    }

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            if(graph[i][j] == (int)1e9) cout << -1 << " ";
            else cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}