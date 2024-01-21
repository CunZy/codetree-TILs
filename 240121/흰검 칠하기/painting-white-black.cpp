#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[200001] = {};
    int b[200001] = {};
    int c[200001] = {};

    int t = 100000;

    for(int i = 0; i < n; ++i) {
        int x;
        char y;

        cin >> x >> y;

        int r;

        if(y == 'R') {
            r = t + x;

            for(int j = t; j < r; ++j) {
                b[j]++;
                if(b[j] >= 2) {
                    if(c[j] >= 2) {
                        a[j] = 3;
                    }
                    else {
                        a[j] = 1;
                    }
                }
                else {
                    a[j] = 1;
                }
            }

            t = r;
        }
        else if(y == 'L') {
            r = t - x;
            for(int j = r; j < t; ++j) {
                c[j]++;
                if(c[j] >= 2) {
                    if(b[j] >= 2) {
                        a[j] = 3;
                    }
                    else {
                        a[j] = 2;
                    }
                }
                else {
                    a[j] = 2;
                }
            }
            t = r;
        }
    }

    int black = 0, white = 0, gray = 0;

    for(int i = 0; i < 200001; i++) {
        if(a[i] == 1) {
            white++;
        }
        else if(a[i] == 2) {
            black++;
        }
        else if(a[i] == 3) {
            gray++;
        }
    }

    cout << black << " " << white << " " << gray << endl;
    return 0;
}