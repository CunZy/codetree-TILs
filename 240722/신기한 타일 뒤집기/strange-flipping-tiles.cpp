#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[100000] = {};
    int here = 50000;

    for(int i = 0; i < n; ++i) {
        int x;
        char y;
        cin >> x >> y;

        if(y == 'L') {
            for(int j = 0; j < x; ++j) {
                a[here] = 1;
                if(j != x - 1) {
                    here--;
                }
            }
        }
        else if(y == 'R') {
            for(int j = 0; j < x; ++j) {
                a[here] = 2;
                if(j != x - 1) {
                    here++;
                }
            }
        }
    }

    int w = 0;
    int b = 0;

    for(int i = 0; i < 100000; ++i) {
        if(a[i] == 1) {
            w++;
        }
        else if(a[i] == 2) {
            ++b;
        }
    }

    cout << w << " " << b << endl;
    return 0;
}