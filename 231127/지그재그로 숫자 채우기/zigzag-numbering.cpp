#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    int a[100][100];

    int c = 0;

    for(int j = 0; j < m; ++j) {
        if(j % 2 == 0) {
            for(int i = 0; i < n; ++i) {
                a[i][j] = c++;
            }
        }
        else {
            for(int i = n - 1; i >= 0; --i) {
                a[i][j] = c++;
            }
        }
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}