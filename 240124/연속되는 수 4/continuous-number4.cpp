#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[1000] = {};
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int cnt = 1;
    int max = 0;

    for(int i = 0; i < n; ++i) {
        if(i >= 1 && a[i] > a[i - 1]) {
            cnt++;
        }
        else {
            cnt = 1;
        }

        if(cnt > max) {
            max = cnt;
        }
    }

    cout << max << endl;
    return 0;
}