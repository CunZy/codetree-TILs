#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[1000] = {};

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int t;
        cin >> t;

        a[i] = t;
    }

    int max = 0;
    int q = 0;
    for(int i = 0; i < n; ++i) {
        if(i == 0 || a[i] != a[i - 1]) {
            if(q > max) {
                max = q;
            }
            q = 0;
        }
        ++q;
    }

    cout << max << endl;
    return 0;
}