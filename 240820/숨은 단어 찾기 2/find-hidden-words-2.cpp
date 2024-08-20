#include <iostream>
using namespace std;

bool IsRange(int a, int b, int n, int m) {
    return a >= 0 && a < n && b >= 0 && b < m;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    string a[50] = {};

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int x[8] = {0, 1, 1, 1, 0, -1, -1, -1};
    int y[8] = {1, 1, 0, -1, -1, -1, 0, 1};

    int cnt = 0;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            int dir = 0;
            if(a[i][j] != 'L') continue;

            for(int k = 0; k < 8; ++k) {
                int sx = i;
                int sy = j;
                int cur = 0;
                while(true) {
                    sx = sx + x[dir];
                    sy = sy + y[dir];
                    if(!IsRange(sx, sy, n, m)) {
                        break;
                    }
                    if(a[sx][sy] != 'E') {
                        break;
                    }
                    ++cur;
                }
                
                if(cur >= 2) {
                    ++cnt;
                }
                dir = (dir + 1) % 8;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}