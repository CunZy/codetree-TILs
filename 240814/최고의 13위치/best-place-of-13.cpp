#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[20][20] = {};

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    int maxC = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n - 2; ++j) {
            int c = a[i][j] + a[i][j + 1] + a[i][j + 2];

            maxC = max(c, maxC);
        }
    }

    cout << maxC << endl;
    return 0;
}