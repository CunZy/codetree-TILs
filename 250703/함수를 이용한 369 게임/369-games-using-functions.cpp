#include <iostream>

using namespace std;

int a, b;

bool isTrue2(int d) {
    while(d > 0) {
        int t = d % 10;
        if(t == 3 || t == 6 || t == 9) {
            return true;
        }
        d /= 10;
    }
    return false;
}

bool isTrue(int d) {
    return d % 3 == 0 || isTrue2(d);
}

int txn(int n, int m) {
    int c = 0;
    for(int i = n; i <= m; ++i) {
        if(isTrue(i)) {
            c++;
        }
    }

    return c;
}

int main() {
    cin >> a >> b;

    // Please write your code here.

    cout << txn(a, b) << endl;

    return 0;
}