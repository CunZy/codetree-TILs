#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <tuple>
using namespace std;

#define MAX_N 10000
#define MAX_M 100000

int n, m;
int uf[MAX_N + 1];
vector<tuple<int, int, int>> edge;

int find(int x) {
    if(x == uf[x]) return x;

    uf[x] = find(uf[x]);
    return uf[x];
}

void Union(int x, int y) {
    int X = find(x), Y = find(y);
    uf[X] = Y;
}

int main() {
    // Please write your code here.
    cin >> n >> m;

    for(int i = 0; i < m; ++i) {
        int a, b, e;
        cin >> a >> b >> e;

        edge.push_back(make_tuple(e, a, b));
    }
    sort(edge.begin(), edge.end());

    for(int i = 1; i <= n; ++i) {
        uf[i] = i;
    }

    int answer = 0;
    for(int i = 0; i < m; ++i) {
        int a, b, e;
        tie(e, a, b) = edge[i];

        if(find(a) != find(b)) {
            Union(a, b);
            answer += e;
        }
    }
    cout << answer;
    return 0;
}