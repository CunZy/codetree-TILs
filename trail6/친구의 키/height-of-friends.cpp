#include <iostream>
#include <vector>
#include <stack>
using namespace std;

#define MAX_N 100000

int n, m;
vector<int> t[MAX_N + 1];
bool visit[MAX_N + 1];
stack<int> order;

void DFS(int idx) {
    for(int i = 0; i < t[idx].size(); ++i) {
        int cur = t[idx][i];
        if(visit[cur]) continue;

        visit[cur] = true;
        DFS(cur);
    }

    order.push(idx);
}

int main() {
    // Please write your code here.
    cin >> n >> m;

    for(int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        t[a].push_back(b);
    }

    for(int i = 1; i <= n; ++i) {
        if(visit[i]) continue;

        visit[i] = true;
        DFS(i);
    }

    while(!order.empty()) {
        cout << order.top() << " ";
        order.pop();
    }
    return 0;
}