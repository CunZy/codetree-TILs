#include <iostream>

using namespace std;

int N;

int sum(int a) {
    int t = 0;
    for(int i = 1; i <= a; ++i) {
        t += i;
    }

    return t / 10;
}

int main() {
    cin >> N;

    // Please write your code here.

    cout << sum(N);

    return 0;
}