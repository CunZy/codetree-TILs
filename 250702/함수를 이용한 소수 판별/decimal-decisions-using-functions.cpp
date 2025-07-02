#include <iostream>

using namespace std;

int a, b;

bool isPrime(int i) {
    for(int j = 2; j < i; ++j) {
        if(i % j == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    cin >> a >> b;

    int sum = 0;

    // Please write your code here.
    for(int i = a; i <= b; ++i) {
        if(isPrime(i)) {
            sum += i;
        }
    }

    cout << sum << endl;
    return 0;
}