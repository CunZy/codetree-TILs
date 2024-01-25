#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, k;
    int a[100] = {};

    cin >> n >> m >> k;

    int ans = -1;

    for(int i = 0; i < m; ++i) {
        int num;
        cin >> num;

        a[num - 1]++;
        if(a[num - 1] >= k) {
            ans = num;
            break;
        }
    }

    cout << ans;
    return 0;
}