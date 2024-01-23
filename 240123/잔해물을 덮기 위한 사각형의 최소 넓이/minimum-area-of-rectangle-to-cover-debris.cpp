#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x1[2] = {}, y1[2] = {}, x2[2] = {}, y2[2] = {};

    int a[2001][2001] = {};

    for(int i = 0; i < 2; ++i) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        x1[i] += 1000;
        x2[i] += 1000;
        y1[i] += 1000;
        y2[i] += 1000;

        for(int j = x1[i]; j < x2[i]; ++j) {
            for(int k = y1[i]; k < y2[i]; ++k) {
                if(a[j][k] == 1) {
                    a[j][k] = 3;
                }
                else {
                    a[j][k] = i + 1;
                }
            }
        }
    }

    int x3 = 0, y3 = 0, x4 = 2001, y4 = 2001;

    for(int i = 0; i < 2001; ++i) {
        for(int j = 0; j < 2001; ++j) {
            if(a[i][j] == 3) {
                if(x3 < i) {
                    x3 = i;
                }
                if(y3 < j) {
                    y3 = j;
                }
                if(x4 > i) {
                    x4 = i;
                }
                if(y4 > j) {
                    y4 = j;
                }
            }
        }
    }
    int cnt = 0;

    if((x1[0] == x4 && x2[0] == x3) || (y1[0] == y4 && y2[0] == y3)) {
        for(int i = 0; i < 2001; ++i) {
            for(int j = 0; j < 2001; ++j) {
                if(a[i][j] == 1) {
                    ++cnt;
                }
            }
        } 
    }   
    else {
        for(int i = 0; i < 2001; ++i) {
            for(int j = 0; j < 2001; ++j) {
                if(a[i][j] == 1 || a[i][j] == 3) {
                    ++cnt;
                }
            }
        } 
    }


    cout << cnt;

    return 0;
}