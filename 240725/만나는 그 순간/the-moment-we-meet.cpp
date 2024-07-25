#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    int a[1000000] = {};
    int b[1000000] = {};

    int here = 1;
    int timeA = 0;
    for(int i = 1; i <= n; ++i) {
        char d;
        int t;
        cin >> d >> t;

        if(d == 'L') {
            for(int j = 0; j < t; ++j) {
                a[here] = a[here - 1] - 1;
                here++;
            }
        }
        else if(d == 'R') {
            for(int j = 0; j < t; ++j) {
                a[here] = a[here - 1] + 1;
                here++;
            }
        }
        timeA += t;
    }

    int h = 1;
    int timeB = 0;
    for(int i = 1; i <= m; ++i) {
        char d;
        int t;
        cin >> d >> t;

        if(d == 'L') {
            for(int j = 0; j < t; ++j) {
                b[h] = b[h - 1] - 1;
                h++;
            }
        }
        else if(d == 'R') {
            for(int j = 0; j < t; ++j) {
                b[h] = b[h - 1] + 1;
                h++;
            }
        }
        timeB += t;
    }

    int time;
    if(timeA > timeB) {
        time = timeA;
    }
    else {
        time = timeB;
    }

    bool tf = true;
    for(int i = 1; i <= time; ++i) {
        if(a[i] == b[i]) {
            cout << i << endl;
            tf = false;
            break;
        }
    }

    if(tf) {
        cout << -1 << endl;
    }

    // for(int i = 0; i <= timeA; ++i) {
    //     cout << a[i] << endl;
    // }

    // cout << endl;

    // for(int i = 0; i <= timeB; ++i) {
    //     cout << b[i] << endl;
    // }
    // return 0;
}