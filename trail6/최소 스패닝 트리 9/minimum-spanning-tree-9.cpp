#include <iostream>
#include <vector>
#include <tuple>
#include <queue>
using namespace std;

#define MAX_N 100000

int n, m;
vector<pair<int, int>> graph[MAX_N + 1];
bool visited[MAX_N + 1];
priority_queue<pair<int, int>> q;
int dist[MAX_N + 1];

int main() {
    cin >> n >> m;

    for(int i = 0; i < m; ++i) {
        int s, e, v;
        cin >> s >> e >> v;

        graph[s].push_back(make_pair(e, v));
        graph[e].push_back(make_pair(s, v));
    }

    int answer = 0;

    for(int i = 1; i <= n; ++i) {
        dist[i] = (int)1e9;
    }
    dist[1] = 0;
    q.push(make_pair(-0, 1));

    while(!q.empty()) {
        int min_idx, min_dist;
        tie(min_dist, min_idx) = q.top();
        q.pop();

        min_dist *= -1;

        if(visited[min_idx]) continue;
        visited[min_idx] = true;
        answer += min_dist;

        for(int i = 0; i < graph[min_idx].size(); ++i) {
            int idx, d;
            tie(idx, d) = graph[min_idx][i];

            if(dist[idx] > d) {
                dist[idx] = d;
                q.push(make_pair(-d, idx));
            }
        }
    }

    cout << answer << endl;
}