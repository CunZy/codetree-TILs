#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[2001] = {};
    int t = 1000;

    for(int i = 0; i < n; ++i) {
        int x;
        char y;
        cin >> x >> y;

        int r;
        if(y == 'R') {
            r = t + x;

            for(int j = t; j < r; ++j) {
                a[j]++;
            }
        }
        else if(y == 'L') {
            r = t - x;

            for(int j = r; j < t; ++j) {
                a[j]++;
            }
        }
        t = r;
    }

    int cnt = 0;

    for(int i = 0; i < 2001; ++i) {
        if(a[i] >= 2) {
            cnt++;           
        } 
    }

    cout << cnt;
    return 0;
}