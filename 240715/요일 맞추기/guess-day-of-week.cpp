#include <iostream>
using namespace std;

int total(int a, int b) {
    int m[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int q = 0;

    for(int i = 1; i < a; ++i) {
        q += m[i];
    }

    q += b;

    return q;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int tot = total(c, d) - total(a, b);

    int t = tot / 7;

    if(t == 1) {
        cout << "Mon" << endl;
    }
    else if(t == 2) {
        cout << "Tue" << endl;
    }
    else if(t == 3) {
        cout << "Wed" << endl;
    }
    else if(t == 4) {
        cout << "Thu" << endl;
    }
    else if(t == 5) {
        cout << "Fri" << endl;
    }
    else if(t == 6) {
        cout << "Sat" << endl;
    }
    else if(t == 0) {
        cout << "Sun" << endl;
    }
    return 0;
}