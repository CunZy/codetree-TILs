#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10][10];
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        a[0][i] = 1;
        a[i][0] = 1;
    }

    for(int i = 1; i < n; ++i) {
        for(int j = 1; j < n; ++j) {
            a[i][j] = a[i - 1][j] + a[i - 1][j - 1] + a[i][j - 1];
        }
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}