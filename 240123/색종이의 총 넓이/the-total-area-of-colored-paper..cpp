#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[201][201] = {};

    for(int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;

        x += 100;
        y += 100;

        for(int j = x; j < x + 8; ++j) {
            for(int k = y; k < y + 8; ++k) {
                a[j][k] = 1;
            }
        }
    }


    int cnt = 0;

    for(int i = 0; i < 201; ++i) {
        for(int j = 0; j < 201; ++j) {
            if(a[i][j] == 1) {
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}