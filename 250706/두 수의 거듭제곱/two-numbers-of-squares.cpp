#include <iostream>

using namespace std;

int a, b;

int multi(int n, int m) {
    int t = 1;
    for(int i = 0; i < m; ++i) {
        t *= n;
    }
    return t;
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    cout << multi(a, b);
    return 0;
}