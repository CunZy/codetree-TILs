#include <iostream>
#include <tuple>
#include <queue>
using namespace std;

#define MAX_N 10000

int n, m;
priority_queue<tuple<int, int, int>> edge;
int uf[MAX_N + 1];

int Find(int x) {
    if(x == uf[x]) return x;
    uf[x] = Find(uf[x]);
    return uf[x];
}

void Union(int x, int y) {
    int X = Find(x), Y = Find(y);
    uf[X] = Y;
}

int main() {
    cin >> n >> m;
    for(int i = 0; i < m; ++i) {
        int v, s, e;
        cin >> s >> e >> v;

        edge.push(make_tuple(-v, s, e));
    }

    int answer = 0;

    for(int i = 1; i <= n; ++i) {
        uf[i] = i;
    }

    while(!edge.empty()) {
        int v, s, e;
        tie(v, s, e) = edge.top();
        edge.pop();
        v *= -1;

        if(Find(s) != Find(e)) {
            Union(s, e);
            answer += v;
        }
    }

    cout << answer;
}