#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10][10];
    int n;
    cin >> n;

    int c = 1;

    for(int j = 0; j < n; ++j) {
        for(int i = 0; i < n; ++i) {
            a[i][j] = c++;
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