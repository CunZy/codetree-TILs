#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[100];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for(int i = n - 1; i >= 0; --i) {
        if(a[i] % 2 == 0) {
            cout << a[i] << " ";
        }
    }
    return 0;
}