#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[201][201] = {};
    int x1, y1, x2, y2;

    for(int i = 0; i < n; ++i) {
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += 100;
        y1 += 100;
        x2 += 100;
        y2 += 100;

        for(int j = x1; j < x2; ++j) {
            for(int k = y1; k < y2; ++k) {
                if(i % 2 == 0) {
                    a[j][k] = 1;
                }
                else {
                    a[j][k] = 2;
                }
            }
        }
    }


    int cnt = 0;
    for(int i = 0; i < 201; ++i) {
        for(int j = 0; j < 201; ++j) {
            if(a[i][j] == 2) {
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}