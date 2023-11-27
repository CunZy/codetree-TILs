#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10][10];
    int b[10][10];

    int n;
    cin >> n;
    int m;
    cin >> m;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> b[i][j];
        }
    }

    int c[10][10];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(a[i][j] == b[i][j]) {
                c[i][j] = 0;
            }
            else {
                c[i][j] = 1;
            }
        }
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}