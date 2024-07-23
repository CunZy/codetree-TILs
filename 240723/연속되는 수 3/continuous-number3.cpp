#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[2000] = {};

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    int ans = 0, cnt = 0;
    int b = 0;
    for(int i = 0; i < n; ++i) {
        if(i == 0 || a[i] * a[i - 1] > 0) {
            ++cnt;
            if(cnt > ans) {
                ans = cnt;
            }
        }
        else if(a[i] * a[i - 1] < 0) {
            cnt = 1;
        }
    }

    cout << ans << endl;
    return 0;
}