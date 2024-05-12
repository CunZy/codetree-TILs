#include <iostream>
using namespace std;

int sum(int a, int c) {
    return a + c;
}

int sub(int a, int c) {
    return a - c;
}

int mul(int a, int c) {
    return a * c;
}

int inv(int a, int c) {
    return a / c;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int a, c;
    char b;
    cin >> a >> b >> c;

    if(b == '*') {
        cout << a << " " << b << " " << c << " = " << mul(a, c);
    }
    else if(b == '/') {
        cout << a << " " << b << " " << c << " = " << inv(a, c);
    }
    else if(b == '+') {
        cout << a << " " << b << " " << c << " = " << sum(a, c);
    }
    else if(b == '-') {
        cout << a << " " << b << " " << c << " = " << sub(a, c);
    }
    else {
        cout << "False";
    }
    return 0;
}