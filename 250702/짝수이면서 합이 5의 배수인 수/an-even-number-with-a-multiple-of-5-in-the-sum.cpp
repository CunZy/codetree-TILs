#include <iostream>

using namespace std;

int n;

bool isTrue2(int n) {
    int t = n / 10;
    int r = n % 10;

    if((t + r) % 5 == 0) {
        return true;
    }
    else {
        return false;
    }
}

bool isTrue(int n) {
    if(n % 2 == 0 && isTrue2(n)) {
        return true;
    }
    else {
        return false;
    }
}

void print(int n) {
    if(isTrue(n)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}

int main() {
    cin >> n;

    // Please write your code here.
    print(n);
    return 0;
}