#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[1000] = {};

    int t;
    cin >> t;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int cnt = 0;
    int ans = 0;

    for(int i = 0; i < n; ++i) {
        if(i >= 1 && a[i] > t) {
            ++cnt;
        }
        else {
            cnt = 0;
        }

        if(ans < cnt) {
            ans = cnt;
        }
    }

    cout << ans << endl;
    return 0;
}