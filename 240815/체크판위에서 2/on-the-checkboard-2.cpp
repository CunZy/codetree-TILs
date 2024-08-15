#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int r, c;
    cin >> r >> c;

    char a[15][15] = {};

    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            cin >> a[i][j];
        }
    }

    int cnt = 0;
    int x = 0, y = 0;

    if(a[r - 1][c - 1] != 'W') {
        for(int i = 1; i < r - 2; ++i) {
            for(int j = 1; j < c - 2; ++j) {
                if(a[i][j] == 'B') {
                    for(int k = i + 1; k < r - 1; ++k) {
                        for(int p = j + 1; p < c - 1; ++p) {
                            if(a[k][p] == 'W') {
                                ++cnt;
                            }
                        }
                    }
                }
            }
        }
    }
    

    cout << cnt << endl;
    return 0;
}