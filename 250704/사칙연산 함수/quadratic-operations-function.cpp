#include <iostream>

using namespace std;

int a;
int c;
char o;

int Plus(int n, int m) {
    return n + m;
}

int Minus(int n, int m) {
    return n - m;
}

int Divide(int n, int m) {
    return n / m;
}

int Multi(int n, int m) {
    return n * m;
}

int main() {
    cin >> a >> o >> c;

    // Please write your code here.
    if(o == '+') {
        cout << a << " + " << c << " = " << Plus(a, c);
    }
    else if(o == '-') {
        cout << a << " - " << c << " = "  << Minus(a, c);

    }
    else if(o == '/') {
        cout << a << " / " << c << " = "  << Divide(a, c);
    }
    else if(o == '*') {
        cout << a << " * " << c << " = "  << Multi(a, c);
    }
    else {
        cout << "False";
    }
    return 0;
}