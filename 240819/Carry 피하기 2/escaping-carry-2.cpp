#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[20] = {};

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int max = INT_MIN;
    bool carry = false;

    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            for(int k = j + 1; k < n; ++k) {
                int b = a[i];
                int c = a[j];
                int t = a[k];
                bool IsTrue = false;
                while(true) {
                    int d = b % 10;
                    int e = c % 10;
                    int r = t % 10;

                    if(d + e + r > 9) {
                        break;
                    }

                    b /= 10;
                    c /= 10;
                    t /= 10;

                    if(b == 0 && c == 0 && t == 0) {
                        IsTrue = true;
                        carry = true;
                        break;
                    }
                }

                int hubo;

                if(IsTrue) {
                    hubo = a[i] + a[j] + a[k];
                    if(hubo > max) {
                        max = hubo;
                    }
                }

            }
        }
    }

    if(carry) {
        cout << max << endl;
    }
    else {
        cout << -1 << endl;
    }
    return 0;
}