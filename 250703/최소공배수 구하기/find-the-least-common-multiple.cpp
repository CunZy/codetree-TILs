#include <iostream>

using namespace std;

int n, m;



int gcd(int a, int b) {
    int w = 1;
    for(int i = 1; i <= min(a, b); ++i) {
        if(a % i == 0 && b % i == 0) {
            w = i;
        }
    }

    return w;
}

void print(int a, int b) {
    int r = gcd(a, b);
    cout << (a * b) / r;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    print(n, m);
    return 0;
}