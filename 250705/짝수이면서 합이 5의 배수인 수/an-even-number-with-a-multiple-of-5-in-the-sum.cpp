#include <iostream>

using namespace std;

int n;

bool isTrue2(int a) {
    int t = 0;
    while(a > 0) {
        t += a % 10;
        a /= 10;
    }
    return t % 5 == 0;
}

bool isTrue(int a) {
    return a % 2 == 0 && isTrue2(a);
}

int main() {
    cin >> n;

    // Please write your code here.
    if(isTrue(n)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}