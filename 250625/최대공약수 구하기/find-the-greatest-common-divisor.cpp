#include <iostream>

using namespace std;

int n, m;

void gcd(int a, int b) {
    int t = max(a, b);

    int g = 0;

    for(int i = 1; i <= t; ++i) {
        if(a % i == 0 && b % i == 0) {
            g = i;
        }
    }

    cout << g << endl;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    gcd(n, m);
    return 0;
}