#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    int a[11][11] = {};

    for(int i = 0; i < m; ++i) {
        int r, c;
        cin >> r >> c;
        a[r][c] = r * c;
    }

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}