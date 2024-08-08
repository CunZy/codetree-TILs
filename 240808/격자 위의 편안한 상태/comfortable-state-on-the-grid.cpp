#include <iostream>
using namespace std;

bool IsRange(int a, int b, int n) {
    return a > 0 && a <= n && b > 0 && b <= n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int m;
    cin >> m;

    int a[101][101] = {};

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    int d = 0;

    for(int i = 0; i < m; ++i) {
        int r, c;
        cin >> r >> c;

        a[r][c] = 1;

        int count = 0;

        for(int j = 0; j < 4; ++j) {

            int dr = r + dx[j];
            int dc = c + dy[j];
            if(IsRange(dr, dc, n) && a[dr][dc] == 1) {
                count++;
            }
        }

        if(count >= 3) {
            cout << 1 << endl;
        }
        else {
            cout << 0 << endl;
        }
    }

    return 0;
}