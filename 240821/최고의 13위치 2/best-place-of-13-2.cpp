#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[20][20] = {};
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    int max = INT_MIN;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n - 2; ++j) {
            for(int k = i; k < n; ++k) {
                for(int l = 0; l < n - 2; ++l) {
                    if(k == i && j - 2 <= l && l <= j + 2) {
                        continue;
                    }
                    if(max < a[i][j] + a[i][j + 1] + a[i][j + 2] + a[k][l] + a[k][l + 1] + a[k][l + 2]) {
                        max = a[i][j] + a[i][j + 1] + a[i][j + 2] + a[k][l] + a[k][l + 1] + a[k][l + 2];
                    }
                }
            }
        }
    }

    cout << max << endl;
    return 0;
}