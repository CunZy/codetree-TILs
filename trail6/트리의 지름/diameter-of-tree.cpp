#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

#define MAX_N 100000

int n;
vector<pair<int, int>> graph[MAX_N + 1];
bool visited[MAX_N + 1];
int dist[MAX_N + 1];

void DFS(int idx) {
    for(int i = 0; i < graph[idx].size(); ++i) {
        int n_idx, d;
        tie(n_idx, d) = graph[idx][i];

        if(!visited[n_idx]) {
            visited[n_idx] = true;
            dist[n_idx] = dist[idx] + d;
            DFS(n_idx);
        }
    }
}

int main() {
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int s, e, v;
        cin >> s >> e >> v;

        graph[s].push_back(make_pair(e, v));
        graph[e].push_back(make_pair(s, v));
    }

    for(int i = 1; i <= n; ++i) {
        dist[i] = (int)1e9;
    }

    visited[1] = true;
    dist[1] = 0;
    DFS(1);

    int m_idx = 1;

    for(int i = 1; i <= n; ++i) {
        if(dist[m_idx] < dist[i]) m_idx = i;
    }

    for(int i = 1; i <= n; ++i) {
        dist[i] = (int) 1e9;
        visited[i] = false;
    }

    visited[m_idx] = true;
    dist[m_idx] = 0;
    DFS(m_idx);

    int answer = -1;

    for(int i = 1; i <= n; ++i) {
        answer = max(answer, dist[i]);
    }

    cout << answer;
}