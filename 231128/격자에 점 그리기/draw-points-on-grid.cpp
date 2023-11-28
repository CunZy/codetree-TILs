#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    int t = 1;

    int a[9][9] = {};

    for(int i = 0; i < m; ++i) {
        int r, c;
        cin >> r >> c;

        a[r - 1][c - 1] = t++;
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}