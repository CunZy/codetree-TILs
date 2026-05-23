#include <iostream>
using namespace std;

#define MAX_N 100000

int uf[MAX_N + 1];

int find(int x) {
    if(x == uf[x]) return x;
    uf[x] = find(uf[x]);
    return uf[x];
}

void Union(int x, int y) {
    int X = find(x), Y = find(y);
    if(X != Y) uf[X] = Y;
}

int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; ++i) {
        uf[i] = i;
    }

    for(int i = 0; i < m; ++i) {
        int q, a, b;
        cin >> q >> a >> b;

        if(q == 0) {
            Union(a, b);
        }
        else {
            if(find(a) == find(b)) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
}