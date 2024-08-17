#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[1004] = {};
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int max = INT_MAX;
    for(int i = 0; i < n; ++i) {
        int cnt = 0;
        int t = i;
        for(int j = 0; j < n; ++j) {
            cnt += j * a[(i + j) % n];
        }

        // cout << cnt << endl;

        if(max > cnt) {
            max = cnt;
        }
    }

    cout << max << endl;
    return 0;
}