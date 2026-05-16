#include <iostream>
#include <vector>
#include <tuple>
#include <queue>
using namespace std;

#define MAX_N 100000

int n, m;
priority_queue<pair<int, int>> q;
vector<pair<int, int>> edge[MAX_N + 1];
bool visited[MAX_N + 1];
int dist[MAX_N + 1]; 

int main() {
    cin >> n >> m;

    for(int i = 0; i < m; ++i) {
        int a, b, v;
        cin >> a >> b >> v;
        edge[b].push_back(make_pair(a, v));
    }

    for(int i = 1; i <= n; ++i) {
        dist[i] = (int)1e9;
    }
    dist[n] = 0;

    q.push(make_pair(-0, n));

    while(!q.empty()) {
        int min_idx, min_dist;
        tie(min_dist, min_idx) = q.top();
        q.pop();

        min_dist *= -1;
        
        if(visited[min_idx]) continue;

        visited[min_idx] = true;

        for(int j = 0; j < edge[min_idx].size(); ++j) {

            int idx, d;
            tie(idx, d) = edge[min_idx][j];

            int t = d + min_dist;

            if(dist[idx] > t) {
                dist[idx] = min(dist[idx], t);
                q.push(make_pair(-t, idx));
            }
        }
    }

    int answer = -1;
    for(int i = 1; i <= n; ++i) {
        answer = max(answer, dist[i]);
    }
    cout << answer;
}