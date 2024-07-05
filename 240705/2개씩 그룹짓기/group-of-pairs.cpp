#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int g(int *b, int *c, int n) {
    int m = 0;
    for(int i = 0; i < n; ++i) {
        if(m < b[i] + c[i]) {
            m = b[i] + c[i];
        }
    }

    return m;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[2000] = {};
    for(int i = 0; i < 2 * n; ++i) {
        cin >> a[i];
    }

    sort(a, a + (2 * n));

    int b[1000] = {};
    int c[1000] = {};

    for(int i = 0; i < n; ++i) {
        b[i] = a[i];
        // cout << b[i] << " ";
    }
    // cout << endl;

    for(int i = n; i < 2 * n; ++i) {
        c[i - n] = a[i];
        // cout << c[i - n] << " ";
    }
    

    sort(c, c + n, greater<int>());

    cout << g(b, c, n);
    return 0;
}