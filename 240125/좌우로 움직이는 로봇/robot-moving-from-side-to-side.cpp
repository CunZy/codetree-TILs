#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    int a[5000000] = {};
    int b[5000000] = {};

    int wayA = 0;
    int wayB = 0;

    int timeA = 1;
    int timeB = 1;

    for(int i = 0; i < n; ++i) {
        char d;
        int t;

        cin >> t >> d;

        if(d == 'R') {
            for(int j = timeA; j < timeA + t; ++j) {
                a[j] = ++wayA;

                // cout << a[j] << " " << 1 << endl;
            }
            timeA += t;
        }
        else if(d == 'L') {
            for(int j = timeA; j < timeA + t; ++j) {
                a[j] = --wayA;
                // cout << a[j] << endl;
            }
            timeA += t;
        }
    }

    for(int i = timeA; i < 5000000; ++i) {
        a[i] = a[timeA - 1];
    }

    for(int i = 0; i < m; ++i) {
        char d;
        int t;
        cin >> t >> d;

        if(d == 'R') {
            for(int j = timeB; j < timeB + t; ++j) {
                b[j] = ++wayB;
                // cout << b[j] << endl;
            } 
            timeB += t;
        }
        else if(d == 'L') {
            for(int j = timeB; j < timeB + t; ++j) {
                b[j] = --wayB;
                // cout << b[j] << endl;
            }
            timeB += t;
        }
    }

    
    for(int i = timeB; i < 5000000; ++i) {
        b[i] = b[timeB - 1];
    }

    int cnt = 0;

    int time = 0;

    if(timeA > timeB) {
        time = timeA;    
    }
    else {
        time = timeB;
    }

    for(int i = 1; i < time; ++i) {
        // cout << a[i] << " " << b[i] << endl;
        if(a[i - 1] != b[i - 1] && a[i] == b[i]) {
            cnt++;
        }        
    }

    cout << cnt;
    return 0;
}