#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a[2000][2000] = {};

    for(int i = 0; i < 3; ++i) {
        int x1, y1;
        int x2, y2;

        cin >> x1 >> y1;
        x1 += 1000;
        y1 += 1000;

        cin >> x2 >> y2;
        x2 += 1000;
        y2 += 1000;

        for(int j = x1; j < x2; ++j) {
            for(int k = y1; k < y2; ++k) {
                a[j][k] = i + 1;
            }
        }
    }

    int h = 0;

    for(int i = 0; i < 2000; ++i) {
        for(int j = 0; j < 2000; ++j) {
            if(a[i][j] != 0 && a[i][j] != 3) {
                ++h;
            }
        }
    }


    cout << h << endl;

    return 0;
}