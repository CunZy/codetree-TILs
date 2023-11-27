#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int a[10][10];
    
    int cnt = 1;

    for(int j = n - 1; j >= 0; --j) {
        if(n % 2 == 0) {
            if(j % 2 == 1) {
                for(int i = n - 1; i >= 0; --i) {
                    a[i][j] = cnt++;
                }
            }
            else {
                for(int i = 0; i < n; ++i) {
                    a[i][j] = cnt++;
                }
            }
        }
        else {
            if(j % 2 == 0) {
                for(int i = n - 1; i >= 0; --i) {
                    a[i][j] = cnt++;
                }
            }
            else {
                for(int i = 0; i < n; ++i) {
                    a[i][j] = cnt++;
                }
            }
        }
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