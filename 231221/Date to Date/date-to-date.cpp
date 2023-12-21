#include <iostream>
using namespace std;

int date[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int Date(int m1, int d1, int m2, int d2) {
    int a = d1;
    for(int i = 1; i < m1; ++i) {
        a += date[i];
    }
    int b = d2;
    for(int i = 1; i < m2; ++i) {
        b += date[i];
    }

    return b - a;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << Date(a, b, c, d) + 1;
    return 0;
}