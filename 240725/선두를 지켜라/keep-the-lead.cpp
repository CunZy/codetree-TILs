#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    int a[1000000] = {};
    int b[1000000] = {};

    int hereA = 1;
    int hereB = 1;

    int time = 0;

    for(int i = 0; i < n; ++i) {
        int v, t;
        cin >> v >> t;

        for(int j = 0; j < t; ++j) {
            a[hereA] = a[hereA - 1] + v;
            hereA++;
        }

        time += t;
    }

    for(int i = 0; i < m; ++i) {
        int v, t;
        cin >> v >> t;

        for(int j = 0; j < t; ++j) {
            b[hereB] = b[hereB - 1] + v;
            hereB++;
        }
    }

    int state = 0;
    int h = 0;
    for(int i = 1; i <= time; ++i) {
        if(state == 0) {
            if(a[i] < b[i]) {
                state = 2;
            }
            else if(a[i] > b[i]) {
                state = 1;
            }
        }
        else if(state == 1) {
            if(b[i] > a[i]) {
                state = 2;
                ++h;
                // cout << i << endl;
            }
        }
        else if(state == 2) {
            if(a[i] > b[i]) {
                state = 1;
                ++h;
                // cout << i << endl;
            }
        }
    }


    cout << h << endl;
    return 0;
}