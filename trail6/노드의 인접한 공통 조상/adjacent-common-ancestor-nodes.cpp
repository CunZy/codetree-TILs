#include <iostream>
#include <vector>
using namespace std;

#define MAX_N 10000

int n;
vector<int> tree[MAX_N + 1];
int depth[MAX_N + 1];
int parent[MAX_N + 1];

void DFS(int idx) {
    for(int i = 0; i < tree[idx].size(); ++i) {
        int t = tree[idx][i];

        depth[t] = depth[idx] + 1;
        // cout << idx << " " << t << " " << depth[t] << " " << depth[idx] << endl;
        DFS(t);
    }
}

int main() {
    cin >> n;
    for(int i = 0; i < n - 1; ++i) {
        int s, e;
        cin >> s >> e;
        parent[e] = s;
        tree[s].push_back(e);
        // cout << s << " " << e << endl;
    }

    int a, b;
    cin >> a >> b;
    // cout << a << " " << b << endl;

    int q = n;
    while(parent[q] != 0) q = parent[q];
    // cout << q << endl;

    DFS(q);
    // cout << depth[a] << " " << depth[b] << endl;
    // cout << endl;
    // cout << a << " " << b << " " << depth[a] << " " << depth[b] << endl;

    while(depth[a] != depth[b]) {
        if(depth[a] > depth[b]) a = parent[a];
        else b = parent[b];
        // cout << a << " " << b << " " << depth[a] << " " << depth[b] << endl;
    }

    // cout << endl;
    while(a != b) {
        a = parent[a];
        b = parent[b];
        // cout << a << " " << b << endl;
    }

    cout << a;
}