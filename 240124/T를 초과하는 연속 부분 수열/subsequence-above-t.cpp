#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int t;

    cin >> n >> t;

    int a[1000] = {};

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int cnt = 0;
    int max = 0;

    for(int i = 0; i < n; ++i) {
        if(a[i] > t) {
            ++cnt;
        }
        else {
            cnt = 0;
        }

        if(cnt > max) {
            max = cnt;
        }
    }

    cout << max << endl;
    return 0;
}