#include <iostream>

using namespace std;

int a;
int c;
char o;

int pluse(int n, int m) {
    return n + m;
}

int minuse(int n, int m) {
    return n - m;
}

int divide(int n, int m) {
    return n / m;
}

int multiple(int n, int m) {
    return n * m;
}

int main() {
    cin >> a >> o >> c;

    // Please write your code here.

    if(o == '+') {
        cout << a << " + " << c << " = " << pluse(a, c);
    }
    else if(o == '-') {
        cout << a << " - " << c << " = " << minuse(a, c);
    }
    else if(o == '/') {
        cout << a << " / " << c << " = " << divide(a, c);
    }
    else if(o == '*') {
        cout << a << " * " << c << " = " << multiple(a, c);
    }
    else {
        cout << "False";
    }

    return 0;
}