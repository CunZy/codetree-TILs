#include <iostream>
using namespace std;

bool IsRange(int a, int b, int n) {
    return a >= 0 && a < n && b >= 0 && b < n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    char a[1000][1000] = {};

    for(int i = 0; i < n; ++i) {
        string mirror;
        cin >> mirror;

        for(int j = 0; j < n; ++j) {
            a[i][j] = mirror[j];
        }
    }

    // for(int i = 0; i < n; ++i) {
    //     for(int j = 0; j < n; ++j) {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int k;
    cin >> k;


    int sx = 0, sy = 0;
    int dsx[4] = {0, 1, 0, -1};
    int dsy[4] = {1, 0, -1, 0}; // 오른, 아래, 왼, 위
    int sd = 0;

    for(int i = 0; i < k; ++i) {
        if((i + 1) % n == 0) {
            sx = sx + dsx[sd];
            sy = sy + dsy[sd];
            sd = (sd + 1) % 4;
        }
        else if(i % n == 0) {
            continue;
        }
        else {
            sx = sx + dsx[sd];
            sy = sy + dsy[sd];
        }
    }


    int dx[4] = {1, 0, -1, 0}; // 아래, 왼, 위, 오른
    int dy[4] = {0, -1, 0, 1}; //   0,  1,  2,   3

    int dir;

    if(k <= n) {
        dir = 0;
    }
    else if(k <= 2 * n) {
        dir = 1;
    }
    else if(k <= 3 * n) {
        dir = 2;
    }
    else {
        dir = 3;
    }

    // cout << sx << " " << sy << " " << dir << endl;

    int count = 0;

    while(IsRange(sx, sy, n)) {
        if(a[sx][sy] == '/') {
            if(dir == 0 || dir == 2) {
                dir = (dir + 1) % 4;
                sx += dx[dir];
                sy += dy[dir];
            }
            else if(dir == 1 || dir == 3) {
                dir = (dir + 3) % 4;
                sx += dx[dir];
                sy += dy[dir];
            }
        }
        else if(a[sx][sy] == '\\') {
            if(dir == 0 || dir == 2) {
                dir = (dir + 3) % 4;
                sx += dx[dir];
                sy += dy[dir];
            }
            else if(dir == 1 || dir == 3) {
                dir = (dir + 1) % 4;
                sx += dx[dir];
                sy += dy[dir];
            }
        }
        count++;
    }

    cout << count << endl;
    return 0;
}