#include <iostream>
using namespace std;

bool IsRange(int a, int b, int n) {
    return a >= 0 && a < n && b >= 0 && b < n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int t;
    cin >> t;

    string order;
    cin >> order;

    int a[100][100] = {};

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    int x = n / 2;
    int y = n / 2;

    int dir = 0;

    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};

    int sum = a[x][y];

    for(int i = 0; i < order.length(); ++i) {
        if(order[i] == 'R') {
            dir = (dir + 1) % 4;
        }
        else if(order[i] == 'L') {
            dir = (dir + 3) % 4;
        }
        else if(order[i] == 'F') {
            int sx = x + dx[dir];
            int sy = y + dy[dir];  

            if(IsRange(sx, sy, n)) {
                x += dx[dir];
                y += dy[dir];
                sum += a[x][y];
            }
        }
    }

    cout << sum << endl;
    return 0;
}