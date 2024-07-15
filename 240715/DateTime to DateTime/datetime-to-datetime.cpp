#include <iostream>
using namespace std;

bool check(int a, int b, int c) {
    if(a == 11) {
        if(b < 11) {
            return false;
        }
        else {
            if(c < 11) {
                return false;
            }
        }
    }
    return true;
}

int cal(int a, int b, int c) {
    int total = 0;
    int q = 11, w = 11, e = 11;
    while(true) {
        if(q == a && w == b && e == c) {
            return total;
        }
        ++e;
        total++;

        if(e == 60) {
            ++w;
            e = 0;
        }
        if(w == 24) {
            ++q;
            w = 0;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;

    if(check(a, b, c)) {
        cout << cal(a, b, c);
    }
    else {
        cout << -1 << endl;
    }
    return 0;
}