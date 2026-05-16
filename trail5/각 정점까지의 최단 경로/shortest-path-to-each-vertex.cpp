#include <iostream>
#include <queue>
#include <vector>
#include <tuple>
using namespace std;

#define MAX_N 20000

int n, m;
vector<pair<int, int>> edge[MAX_N + 1];
priority_queue<pair<int, int>> q;
bool visited[MAX_N + 1];
int dist[MAX_N + 1];

int main() {
    cin >> n >> m;
    int k;
    cin >> k;

    for(int i = 0; i < m; ++i) {
        int s, e, v;
        cin >> s >> e >> v;

        edge[s].push_back(make_pair(e, v));
        edge[e].push_back(make_pair(s, v));
    }

    for(int i = 1; i <= n; ++i) {
        dist[i] = (int)1e9;
    }
    dist[k] = 0;

    q.push(make_pair(-0, k));

    while(!q.empty()) {
        int min_idx, min_dist;
        tie(min_dist, min_idx) = q.top();
        q.pop();

        min_dist *= -1;

        if(visited[min_idx]) continue;

        visited[min_idx] = true;

        for(int i = 0; i < edge[min_idx].size(); ++i) {
            int d, idx;
            tie(idx, d) = edge[min_idx][i];

            int t = d + dist[min_idx];

            if(t < dist[idx]) {
                dist[idx] = t;
                q.push(make_pair(-t, idx));
            }
        }

        // for(int i = 1; i <= n; ++i) {
        //     if(dist[i] == (int)1e9) cout << -1 << " ";
        //     else cout << dist[i] << " ";
        // }
        // cout << endl;
    }

    for(int i = 1; i <= n; ++i) {
        if(dist[i] == (int)1e9) cout << -1 << endl;
        else cout << dist[i] << endl;
    }
}