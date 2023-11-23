#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[10] = {};

    for(int i = 0; i < n; ++i) {
        int b;
        cin >> b;
        a[b]++;
    }

    for(int i = 1; i < 10; ++i) {
        cout << a[i] << endl;
    }
    return 0;
}