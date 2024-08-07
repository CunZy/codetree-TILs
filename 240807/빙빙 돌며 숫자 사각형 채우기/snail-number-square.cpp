#include <iostream>
using namespace std;

bool IsRange(int a, int b, int n, int m) {
    return (a >= 0 && a < n && b >= 0 && b < m);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int m;
    cin >> m;

    int a[100][100] = {};

    a[0][0] = 1;

    int x = 0, y = 0;

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    int dir = 0;

    for(int i = 1; i < n * m; ++i) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(!IsRange(nx, ny, n, m) || a[nx][ny] != 0) {
            dir = (dir + 1) % 4;
        }

        x = x + dx[dir];
        y = y + dy[dir];

        a[x][y] = i + 1;
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}