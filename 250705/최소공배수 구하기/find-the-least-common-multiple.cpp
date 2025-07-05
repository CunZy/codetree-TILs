#include <iostream>

using namespace std;

int n, m;

int gcd(int a, int b) {
    int g = 0;

    for(int i = 2; i <= min(a, b); ++i) {
        if(a % i == 0 && b % i == 0) {
            g = i;
        }
    }

    return g;
}

void print(int a, int b) {
    int gc = gcd(a, b);

    cout << (a * b) / gc;
}

int main() {
    cin >> n >> m;

    // Please write your code here.

    print(n, m);

    return 0;
}