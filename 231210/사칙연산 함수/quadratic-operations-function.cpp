#include <iostream>
using namespace std;

int Plus(int a, int b) {
    return a + b;
}

int Minus(int a, int b) {
    return a - b;
}

int Multi(int a, int b) {
    return a * b;
}

int Div(int a, int b) {
    return a / b;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    char c;

    cin >> a >> c >> b;

    if(c == '+') cout << a << " " << c << " " << b << " = " << Plus(a, b);
    else if(c == '-') cout << a << " " << c << " " << b << " = " << Minus(a, b);
    else if(c == '*') cout << a << " " << c << " " << b << " = " << Multi(a, b);
    else if(c == '/') cout << a << " " << c << " " << b << " = " << Div(a, b);
    else {
        cout << "False";
    }
    return 0;
}