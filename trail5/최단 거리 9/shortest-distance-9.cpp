#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

#define MAX_N 1000

vector<pair<int, int>> edge[MAX_N + 1];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
int dist[MAX_N + 1];
bool visited[MAX_N + 1];
int way[MAX_N + 1];

int n, m;
int a, b;

int main() {
    cin >> n >> m;

    for(int i = 0; i < m; ++i) {
        int s, e, v;
        cin >> s >> e >> v;
        edge[s].push_back(make_pair(e, v));
        edge[e].push_back(make_pair(s, v));
    }

    cin >> a >> b;

    for(int i = 1; i <= n; ++i) {
        dist[i] = (int)1e9;
    }
    dist[a] = 0;

    q.push(make_pair(0, a));

    while(!q.empty()) {
        int min_idx, min_dist;
        tie(min_dist, min_idx) = q.top();
        q.pop();

        if(visited[min_idx]) continue;

        visited[min_idx] = true;

        for(int i = 0; i < edge[min_idx].size(); ++i) {
            int idx, d;
            tie(idx, d) = edge[min_idx][i];

            int t = d + dist[min_idx];

            if(dist[idx] > t) {
                dist[idx] = t;
                way[idx] = min_idx;
                q.push(make_pair(t, idx));
            }
        }
    }

    vector<int> ways;
    int answer = dist[b];

    // for(int i = 0; i < n; ++i) {
    //     cout << dist[i] << " ";
    // }
    // cout << endl;
    // for(int i = 0; i < n; ++i) {
    //     cout << way[i] << " ";
    // }
    // cout << endl;

    int idx = b;

    ways.push_back(b);
    while(idx != a) {
        idx = way[idx];
        ways.push_back(idx);
    }

    cout << answer << endl;

    for(int i = ways.size() - 1; i >= 0; --i) {
        cout << ways[i] << " ";
    }
    
}