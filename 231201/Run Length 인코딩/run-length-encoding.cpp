#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    char d[2000];
    int e[2000];
    char b;
    int c;

    cin >> a;

    int t = 0;
    b = a[0];
    c = 0;
    for(int i = 0; i < a.length(); ++i) {
        if(i == a.length() - 1) {
            if(b == a[i]) {
                ++c;
                d[t] = b;
                e[t] = c;
                ++t;
            }
            else {
                d[t] = b;
                e[t] = c;
                ++t;
                c = 1;
                d[t] = a[i];
                e[t] = c;
                ++t;
            }
        }
        else if(b != a[i]) {
            d[t] = b;
            e[t] = c;
            ++t;
            c = 1;
            b = a[i];
        }
        else if(b == a[i]) {
            ++c;
        }
    }

    int r = 0;
    for(int i = 0; i < t; ++i) {
        ++r;
        while(true) {
            int q = e[i];
            if(q / 10 != 0) {
                q = e[i] / 10;
                ++r;
            }
            else {
                ++r;
                break;
            }
        }
    }

    cout << r << endl;
    for(int i = 0; i < t; ++i) {
        cout << d[i] << e[i];
    }


    return 0;
}