#include <iostream>
using namespace std;

int n, m;

bool In(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};


    cin >> n >> m;

    int dir = 0;

    int x = 0, y = 0;

    int cnt = 1;


    int a[100][100] = {};

    a[0][0] = cnt;

    for(int k = 1; k < n * m; ++k) {
        int ddx = x + dx[dir];
        int ddy = y + dy[dir];

        if(!In(ddx, ddy) || a[ddx][ddy] != 0) {
            dir = (dir + 1) % 4;
        }

        x += dx[dir];
        y += dy[dir];

        a[x][y] = ++cnt;

        // cout << x << " " << y << " " << a[x][y] << endl;
    } 

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}