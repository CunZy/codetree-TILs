#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[1000] = {};

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int ans = 0;

    for(int i = 0; i < n; ++i) {
        for(int j = i; j < n; ++j) {
            int sum = 0;
            for(int k = i; k <= j; ++k) {
                sum += a[k];
            }

            int total = sum / (j - i + 1);

            // cout << i << " " << j << " " << sum << " " << total << " ";
            if(sum % (j - i + 1) == 0) {
                for(int k = i; k <= j; ++k) {
                    if(total == a[k]) {
                        ans++;
                        break;
                    }
                }
            }
            // cout << ans << endl;
        }
    }

    cout << ans << endl;
    return 0;
}