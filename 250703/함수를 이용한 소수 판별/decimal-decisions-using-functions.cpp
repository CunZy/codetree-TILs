#include <iostream>

using namespace std;

int a, b;

bool isTrue(int i) {
    for(int j = 2; j < i; ++j) {
        if(i % j == 0) {
            return false;
        }
    }
    return true;
}

int sum(int n, int m) {
    int c = 0;
    for(int i = n; i <= m; ++i) {
        if(isTrue(i)) {
            c += i;
        }
    }

    return c;
}

int main() {
    cin >> a >> b;

    // Please write your code here.

    cout << sum(a, b) << endl;

    return 0;
}