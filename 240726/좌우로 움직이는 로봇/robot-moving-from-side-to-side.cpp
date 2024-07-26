#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    int a[5000000] = {};
    int b[5000000] = {};

    int hereA = 1;
    int hereB = 1;

    int timeA = 0;
    int timeB = 0;

    for(int i = 0; i < n; ++i) {
        int t;
        char d;

        cin >> t >> d;

        if(d == 'L') {
            for(int j = 0; j < t; ++j) {
                a[hereA] = a[hereA - 1] - 1;
                hereA++;
            }
        }
        else if(d == 'R') {
            for(int j = 0; j < t; ++j) {
                a[hereA] = a[hereA - 1] + 1;
                hereA++;
            }
        }

        timeA += t;
    }

    for(int i = 0; i < m; ++i) {
        int t;
        char d;
        cin >> t >> d;

        if(d == 'L') {
            for(int j = 0; j < t; ++j) {
                b[hereB] = b[hereB - 1] - 1;
                hereB++;
            }
        }
        else if(d == 'R') {
            for(int j = 0; j < t; ++j) {
                b[hereB] = b[hereB - 1] + 1;
                hereB++;
            }
        }

        timeB += t;
    }

    int time;

    if(timeA > timeB) {
        for(int i = timeB + 1; i <= timeA; ++i) {
            b[i] = b[i - 1];
        }
        time = timeA;
    }
    else {
        for(int i = timeA + 1; i <= timeB; ++i) {
            a[i] = a[i - 1];
        }
        time = timeB;
    }

    int cnt = 0;

    for(int i = 2; i <= time; ++i) {
        if(a[i] == b[i] && a[i - 1] != b[i - 1]) {
            ++cnt;
        }

    }

    // for(int i = 1; i <= time; ++i) {
    //     cout << a[i] << " " << b[i] << endl;
    // }


    cout << cnt << endl;
    return 0;
}