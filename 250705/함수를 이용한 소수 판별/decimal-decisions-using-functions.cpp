#include <iostream>

using namespace std;

int a, b;

bool isPrime(int e) {
    if(e == 1) {
        return false;
    }

    for(int i = 2; i < e; ++i) {
        if(e % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    cin >> a >> b;

    int c = 0;
    // Please write your code here.
    for(int i = a; i <= b; ++i) {
        if(isPrime(i)) {
            c += i;
        }
    }

    cout << c;
    return 0;
}