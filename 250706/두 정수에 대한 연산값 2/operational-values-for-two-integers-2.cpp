#include <iostream>

using namespace std;

int a, b;

void change(int &n, int &m) {
    if(n > m) {
        n *= 2;
        m += 10;
    }
    else {
        n += 10;
        m *= 2;
    }
}

int main() {
    cin >> a >> b;

    // Please write your code here.

    change(a, b);

    cout << a << " " << b;

    return 0;
}