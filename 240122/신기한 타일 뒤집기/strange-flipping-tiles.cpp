#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[200001] = {};
    int t = 100000;

    for(int i = 0; i < n; ++i) {
        int x;
        char y;
        cin >> x >> y;

        int r;

        if(y == 'R') {
            r = t + x;
            for(int j = t; j < r; ++j) {
                a[j] = 2;
            }
            t = r - 1;
        }
        else if(y == 'L') {
            r = t - x;
            for(int j = t; j > r; --j) {
                a[j] = 1;
            }
            t = r + 1;
        }
    }

    int white = 0;
    int black = 0;

    for(int i = 0; i < 200001; ++i) {
        if(a[i] == 1) {
            white++;
        }
        else if(a[i] == 2) {
            black++;
        }
    }

    cout << white << " " << black;
    return 0;
}