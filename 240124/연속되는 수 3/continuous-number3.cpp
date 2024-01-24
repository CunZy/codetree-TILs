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
        if(i >= 1 && (a[i] * a[i - 1] >= 0)) {
            cnt++;
            if(max < cnt) {
                max = cnt;
            }
        }
        else {
            if(max < cnt) {
                max = cnt;
            }
            cnt = 1;
        }
    }

    cout << max << endl;
    return 0;
}