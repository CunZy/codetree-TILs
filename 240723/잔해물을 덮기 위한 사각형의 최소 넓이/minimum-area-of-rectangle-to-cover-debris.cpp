#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[2001][2001] = {};
    for(int i = 0; i < 2; ++i) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += 1000;
        y1 += 1000;
        x2 += 1000;
        y2 += 1000;

        for(int j = x1; j < x2; ++j) {
            for(int k = y1; k < y2; ++k) {
                a[j][k] = i + 1;
            }
        }
    }

    int minx = 2001;
    int miny = 2001;
    int maxx = 0;
    int maxy = 0;

    int t = 0;
    for(int i = 0; i < 2001; ++i) {
        for(int j = 0; j < 2001; ++j) {
            if(a[i][j] == 1) {
                if(minx > i) {
                    minx = i;
                    t = 1;
                }
                if(miny > j) {
                    miny = j;
                    t = 1;
                }
                if(maxx < i) {
                    maxx = i;
                    t = 1;
                }
                if(maxy < j) {
                    maxy = j;
                    t = 1;
                }
            }
        }
    }

    if(t) {
        cout << (maxy + 1 - miny) * (maxx + 1 - minx);
    }
    else {
        cout << 0 << endl;
    }
    return 0;
}