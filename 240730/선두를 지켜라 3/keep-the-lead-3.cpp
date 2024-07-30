#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    int hereA = 1;
    int a[1000000] = {};

    for(int i = 0; i < n; ++i) {
        int v, t;
        cin >> v >> t;

        for(int j = 0; j < t; ++j) {
            a[hereA] = a[hereA - 1] + v;
            hereA++;
        }
    }

    int time = 0;

    int hereB = 1;
    int b[1000000] = {};
    for(int i = 0; i < m; ++i) {
        int v, t;
        cin >> v >> t;

        for(int j = 0; j < t; ++j) {
            b[hereB] = b[hereB - 1] + v;
            hereB++;
        }

        time += t;
    }

    int state = 0;
    int times = 0;

    for(int i = 1; i <= time; ++i) {
        if(state == 0) {
            if(a[i] > b[i]) {
                state = 1;
                times++;
                // cout << times << endl << state << endl;
                
            }
            else if(a[i] < b[i]) {
                state = 2;
                times++;
                // cout << times << endl << state << endl;
            }
            else {
                state = 3;
                times++;
                // cout << times << endl << state << endl;
            }
        }    
        else if(state == 1) {
            if(b[i] > a[i]) {
                state = 2;
                times++;
                // cout << times << endl << state << endl;
            }
            else if(b[i] == a[i]) {
                state = 3;
                times++;
                // cout << times << endl << state << endl;
            }
        }
        else if(state == 2) {
            if(a[i] > b[i]) {
                state = 1;
                times++;
                // cout << times << endl << state << endl;
            }
            else if(b[i] == a[i]) {
                state = 3;
                times++;
                // cout << times << endl << state << endl;
            }
        }
        else if(state == 3) {
            if(a[i] > b[i]) {
                state = 1;
                times++;
                // cout << times << endl << state << endl;
            }
            else if(b[i] > a[i]) {
                state = 2;
                times++;
                // cout << times << endl << state << endl;
            }
        }
    }

    cout << times << endl;
    return 0;
}