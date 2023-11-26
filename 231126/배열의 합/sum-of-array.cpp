#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[4][4];

    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < 4; ++j) {
            cin >> a[i][j];
        }
    }

    int sum[4] = {};

    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < 4; ++j) {
            sum[i] += a[i][j];
        }
    }

    for(int i = 0; i < 4; ++i) {
        cout << sum[i] << endl;
    }
    return 0;
}