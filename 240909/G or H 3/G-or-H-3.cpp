#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int k;
    cin >> k;

    char location[10001] = {};

    int ma = INT_MIN;

    for(int i = 0; i < n; ++i) {
        int loc;
        char alp;

        cin >> loc >> alp;

        location[loc] = alp;
        ma = max(loc, ma);
    }

    int ans = INT_MIN;

    if(k <= ma) {
        for(int i = 1; i <= ma - k; ++i) {
            int pre = 0;
            for(int j = i; j <= i + k; ++j) {
                if(location[j] == 'G') {
                    pre += 1;
                }
                else if(location[j] == 'H') {
                    pre += 2;
                }
            }

            // cout << pre << endl;

            ans = max(ans, pre);
        }
    }
    else {
        ans = 0;
        for(int i = 1; i <= ma; ++i) {
            if(location[i] == 'G') {
                ans += 1;
            }
            else if(location[i] == 'H') {
                ans += 2;
            }
        }
    }


    cout << ans << endl;

    return 0;
}