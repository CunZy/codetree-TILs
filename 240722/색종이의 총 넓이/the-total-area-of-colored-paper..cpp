#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[201][201] = {};

    int x, y;

    for(int i = 0; i < n; ++i) {
        cin >> x >> y;

        x += 100;
        y += 100;

        for(int j = 0; j < 8; ++j) {
            for(int k = 0; k < 8; ++k) {
                a[x + j][y + k] = 1;
            }
        }
    }

    int h = 0;

    for(int i = 0; i < 201; ++i) {
        for(int j = 0; j < 201; ++j) {
            h += a[i][j];
        }
    }

    cout << h << endl;
    return 0;
}