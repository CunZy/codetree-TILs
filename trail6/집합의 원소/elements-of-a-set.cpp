#include <iostream>
using namespace std;

#define MAX_N 100000

int a[MAX_N + 1];
int n, m;

int find(int t) {
    if(t == a[t]) return t;

    a[t] = find(a[t]);
    return a[t];
}

void Union(int x, int y) {
    int X = find(x);
    int Y = find(y);

    a[X] = Y;
}


int main() {
    // Please write your code here.
    cin >> n >> m;

    for(int i = 1; i <= n; ++i) {
        a[i] = i;
    }

    for(int i = 0; i < m; ++i) {
        int q, w, e;
        cin >> q >> w >> e;

        if(q == 0) Union(w, e);
        else {
            if(find(w) == find(e)) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }

    return 0;
}