#include <iostream>
#include <tuple>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

#define MAX_N 1000

int n, m;
int a, b;
vector<pair<int, int>> graph[MAX_N + 1];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
int dist[MAX_N + 1];
int path[MAX_N + 1];
vector<int> way;

int main() {
    // Please write your code here.
    cin >> n >> m;
    for(int i = 0; i < m; ++i) {
        int x, y, edge;
        cin >> x >> y >> edge;

        graph[x].push_back(make_pair(y, edge));
        graph[y].push_back(make_pair(x, edge));
    }

    cin >> a >> b;


    for(int i = 0; i <= n; ++i) {
        dist[i] = (int)1e9;
    }

    dist[a] = 0;

    q.push(make_pair(0, a));


    while(!q.empty()) {
        int min_idx, min_dist;
        tie(min_dist, min_idx) = q.top();
        q.pop();

        if(min_dist != dist[min_idx]) continue;

        for(int i = 0; i < graph[min_idx].size(); ++i) {
            int idx, edge;
            tie(idx, edge) = graph[min_idx][i];

            int new_dist = edge + dist[min_idx];

            if(dist[idx] > new_dist) {
                path[idx] = min_idx;
                dist[idx] = new_dist;
                q.push(make_pair(new_dist, idx));
            }
        }
    }

    int x = b;
    way.push_back(x);
    
    while(x != a) {
        x = path[x];
        way.push_back(x);
    }

    cout << dist[b] << endl;

    for(int i = way.size() - 1; i >= 0; --i) {
        cout << way[i] << " ";
    }

    return 0;
}