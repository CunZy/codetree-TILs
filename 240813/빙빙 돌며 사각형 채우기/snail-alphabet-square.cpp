#include <iostream>
using namespace std;

bool IsRange(int a, int b, int n, int m) {
    return a >= 0 && a < n && b >= 0 && b < m;
}

int main() {
    // 여기에 코드를 작성해주세요.
    char a[100][100] = {};

    int n, m;
    cin >> n >> m;

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    int dir = 0;

    int x = 0, y = 0;

    int num = 65;

    for(int i = 0; i < n * m; ++i) {
        int sx = x + dx[dir];
        int sy = y + dy[dir];

        if(!IsRange(sx, sy, n, m) || a[sx][sy] != '\0') {
            dir = (dir + 1) % 4;
        }    
        // cout << dir << endl;

        a[x][y] = (char)num;
        // cout << x << " " << y << endl;

        x += dx[dir];
        y += dy[dir];


        num++;

        if(num > 90) {
            num = 65;
        }
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // cout << (char)65 << (char)90 << endl;
    return 0;
}