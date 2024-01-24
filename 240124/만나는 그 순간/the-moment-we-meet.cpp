#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[1000000] = {};
    int b[1000000] = {};

    int n, m;
    cin >> n >> m;

    int timeA = 0;
    int wayA = 0;
    int timeB = 0;
    int wayB = 0;
    
    for(int i = 0; i < n; ++i) {
        char d;
        int t;

        cin >> d >> t;

        if(d == 'R') {
            for(int j = 0; j < t; ++j) {
                a[++timeA] = ++wayA;
            }
        }
        else if(d == 'L') {
            for(int j = 0; j < t; ++j) {
                a[++timeA] = --wayA;
            }
        }
    }
    
    for(int i = 0; i < m; ++i) {
        char d;
        int t;

        cin >> d >> t;

        if(d == 'R') {
            for(int j = 0; j < t; ++j) {
                b[++timeB] = ++wayB;
            }
        }
        else if(d == 'L') {
            for(int j = 0; j < t; ++j) {
                b[++timeB] = --wayB;
            }
        }
    }


    for(int i = 1; i < 1000000; ++i) {
        if(a[i] == b[i]) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}