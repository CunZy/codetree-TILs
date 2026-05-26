#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define MAX_N 100000

int n, m;
vector<int> edge[MAX_N + 1];
int degree[MAX_N + 1];
queue<int> order;
int total;

int main() {
    // Please write your code here.
    cin >> n >> m;

    for(int i = 0; i < m; ++i) {
        int q, w;
        cin >> q >> w;

        edge[q].push_back(w);
        degree[w]++;
    }

    for(int i = 1; i <= n; ++i) {
        if(degree[i] == 0) {
            order.push(i);
            ++total;
        }
    }

    while(!order.empty()) {
        int idx = order.front();
        order.pop();

        for(int i = 0; i < edge[idx].size(); ++i) {
            int cur = edge[idx][i];
            degree[cur]--;
            if(degree[cur] == 0) {
                order.push(cur);
                ++total;
            }
        }
    }

    if(total < n) cout << "Inconsistent";
    else cout << "Consistent";
    return 0;
}