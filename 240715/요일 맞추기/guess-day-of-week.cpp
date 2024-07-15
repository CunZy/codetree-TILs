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

    string day[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    string day2[7] = {"Tue", "Mon", "Sun", "Sat", "Fri", "Thu", "Wed"};

    int tot = total(c, d) - total(a, b) + 1;

    if(a > c || (a == c && b < d)) {
        tot = total(a, b) - total(c, d) + 1;
    }

    int t = tot % 7;



    if(a > c || (a == c && b < d)) {
        cout << day2[t] << endl;
    }
    else {
        cout << day[t] << endl;
    }


    return 0;
}