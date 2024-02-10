#include <iostream>
using namespace std;

int a[100][100];
int n;
int m;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;

    for(int k = 0; k < m; ++k) {
        int r, c;
        cin >> r >> c;

        r -= 1;
        c -= 1;

        a[r][c] = 1;

        int dx[4] = {0, 1, 0, -1};
        int dy[4] = {1, 0, -1, 0};

        if((r == 0 || r == n - 1) && (c == 0 || c == n - 1)) {
            // cout << "a" << endl;
            cout << 0 << endl;
        }
        else if(r == 0) {
            if(a[r + 1][c] == 1 && a[r][c + 1] == 1 && a[r][c - 1] == 1) {
                cout << 1 << endl;
            }
            else {
                // cout << "b" << endl;
                cout << 0 << endl;
            }
        }
        else if(r == n - 1) {
            if(a[r - 1][c] == 1 && a[r][c - 1] == 1 && a[r][c + 1] == 1) {
                cout << 1 << endl;
            }
            else {
                // cout << "c" << endl;
                cout << 0 << endl;
            }
        }
        else if(c == 0) {
            if(a[r][c + 1] == 1 && a[r + 1][c] == 1 && a[r - 1][c] == 1) {
                cout << 1 << endl;
            }
            else {
                // cout << "d" << endl;
                cout << 0 << endl;
            }
        }
        else if(c == n - 1) {
            if(a[r][c - 1] == 1 && a[r + 1][c] == 1 && a[r - 1][c] == 1) {
                cout << 1 << endl;
            }
            else {
                // cout << "e" << endl;
                cout << 0 << endl;
            }
        }
        else {
            int cnt = 0;
            for(int i = 0; i < 4; ++i) {
                if(a[r + dx[i]][c + dy[i]] == 1) {
                    ++cnt;
                }
            }

            if(cnt == 3) {
                cout << 1 << endl;
            }
            else {
                // cout << "f" << endl;
                cout << 0 << endl;
            }
        }
    }
    return 0;
}