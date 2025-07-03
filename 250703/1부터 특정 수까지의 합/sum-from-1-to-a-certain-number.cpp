#include <iostream>

using namespace std;

int N;

int sum(int a) {
    int w = 0;
    for(int i = 1; i <= a; ++i) {
        w += i;
    }

    return w / 10;
}

int main() {
    cin >> N;

    // Please write your code here.
    cout << sum(N);
    return 0;
}