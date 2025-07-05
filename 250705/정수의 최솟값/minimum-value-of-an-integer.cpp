#include <iostream>

using namespace std;

int a, b, c;

int mini(int q, int w, int e) {
    int m = q;
    if(m > w) {
        m = w;
    }
    if(m > e) {
        m = e;
    }

    return m;
}

int main() {
    cin >> a >> b >> c;

    // Please write your code here.
    cout << mini(a, b, c);
    return 0;
}