#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[1000] = {};
    int k;
    cin >> k;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a, a + n);

    cout << a[k - 1];
    return 0;
}