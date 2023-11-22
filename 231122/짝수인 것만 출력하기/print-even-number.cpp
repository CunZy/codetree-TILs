#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int a[100];

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int b[100] = { };
    for(int i = 0; i < n; ++i) {
        if(a[i] % 2 == 0) {
            b[i] = a[i];
        }
    }

    for(int i = 0; i < n; ++i) {
        if(b[i] != 0) {
            cout << b[i] << " ";
        }
    }
    return 0;
}