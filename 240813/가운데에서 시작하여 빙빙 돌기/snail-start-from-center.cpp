#include <iostream>
using namespace std;

bool IsRange(int a, int b, int n) {
    return a >= 0 && a < n && b >= 0 && b < n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[100][100] = {};

    int x = n / 2;
    int y = n / 2;

    int dx[4] = {0, -1, 0, 1};
    int dy[4] = {1, 0, -1, 0};

    int dir = 0;

    for(int i = 1; i <= n * n; ++i) {
        int sx = x + dx[dir];
        int sy = y + dy[dir];

        a[x][y] = i;
        // cout << x << " " << y << " " << dir << endl;

        if(!IsRange(sx, sy, n)) {
            dir = (dir + 1) % 4;
            x = x + dx[dir];
            y = y + dy[dir];
        }
        else if(a[sx][sy] == 0) {
            x = x + dx[dir];
            y = y + dy[dir];
            int d = (dir + 1) % 4;
            if(a[x + dx[d]][y + dy[d]] == 0) {
                dir = (dir + 1) % 4;
            }
        }

    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}