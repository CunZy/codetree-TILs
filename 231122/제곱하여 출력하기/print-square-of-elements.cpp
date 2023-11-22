#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[100];
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i) {
        cout << a[i] * a[i] << " ";
    }
    return 0;
}