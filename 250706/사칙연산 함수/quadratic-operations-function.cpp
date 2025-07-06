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

int Div(int n, int m) {
    return n / m;
}

int Mul(int n, int m) {
    return n * m;
}

int main() {
    cin >> a >> o >> c;

    // Please write your code here.
    if(o == '+') 
        cout << a << " + " << c << " = " << Plus(a, c);
    else if(o == '-')
        cout << a << " - " << c << " = " << Minus(a, c);
    else if(o == '/')
        cout << a << " / " << c << " = " << Div(a, c);
    else if(o == '*')
        cout << a << " * " << c << " = " << Mul(a, c);
    else 
        cout << "False";
    return 0;
}