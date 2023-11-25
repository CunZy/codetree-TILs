#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[1000];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int ans = 0;

    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            if(a[i] < a[j] && ans < a[j] - a[i]) {
                ans = a[j] - a[i];
            }
        }
    }

    cout << ans << endl;
    return 0;
}