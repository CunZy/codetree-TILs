#include <iostream>
#include <stack>
#include <vector>
using namespace std;

#define MAX_N 100000

int n, m;
vector<int> graph[MAX_N + 1];
stack<int> order;
bool visited[MAX_N + 1];

void DFS(int idx) {
    for(int i = 0; i < graph[idx].size(); ++i) {
        int t = graph[idx][i];
        if(!visited[t]) {
            visited[t] = true;
            DFS(t);
        }
    }

    order.push(idx);
}

int main() {
    cin >> n >> m;

    for(int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
    }

    for(int i = 1; i <= n; ++i) {
        if(!visited[i]) {
            visited[i] = true;
            DFS(i);
        }
    }

    while(!order.empty()) {
        cout << order.top() << " ";
        order.pop();
    }
}