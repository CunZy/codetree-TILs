#include <iostream>
#include <algorithm>
using namespace std;

int a[2000];
int b[1000];
int n;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < 2 * n; ++i) {
        cin >> a[i];
    }

    sort(a, a + 2 * n);

    for(int i = 0; i < n; ++i) {
        b[i] = a[i] + a[2 * n - 1 - i];
    }

    int max = 0;

    for(int i = 0; i < n; ++i) {
        if(max < b[i]) {
            max = b[i];
        }
    }

    cout << max;
    return 0;
}