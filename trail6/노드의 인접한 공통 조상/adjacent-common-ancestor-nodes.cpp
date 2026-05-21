#include <iostream>
#include <vector>
using namespace std;

#define MAX_N 10000

int n;
int depth[MAX_N + 1];
int parent[MAX_N + 1];
vector<int> a[MAX_N + 1];
bool visit[MAX_N + 1];

void DFS(int idx) {
    for(int i = 0; i < a[idx].size(); ++i) {
        int cur = a[idx][i];
        if(visit[cur]) continue;

        // parent[cur] = idx;
        depth[cur] = depth[idx] + 1;
        visit[cur] = true;
        DFS(cur);
    }
}

int main() {
    // Please write your code here.
    cin >> n;

    for(int i = 0; i < n - 1; ++i) {
        int q, w;
        cin >> q >> w;

        a[q].push_back(w);
        parent[w] = q;
    }
    
    int id = 0;

    for(int i = 1; i <= n; ++i) {
        if(parent[i] == 0) {
            id = i;
            break;
        }
    }

    visit[id] = true;
    depth[id] = 0;
    DFS(id);

    int q, w;
    cin >> q >> w;

    while(depth[q] != depth[w]) {
        if(depth[q] > depth[w]) q = parent[q];
        else w = parent[w];
    }

    while(w != q) {
        w = parent[w];
        q = parent[q];
    }


    cout << q;
    return 0;
}