#include <iostream>

using namespace std;

int n;

bool isTrue2(int b) {
    int q = b / 10;
    int w = b % 10;

    return (q + w) % 5 == 0;
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