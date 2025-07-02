#include <iostream>

using namespace std;

int a, b, c;

int mini(int n, int m, int p) {
    int t = min(n, m);
    int r = min(t, p);

    return r;
}

int main() {
    cin >> a >> b >> c;

    // Please write your code here.
    cout << mini(a, b, c);
    return 0;
}