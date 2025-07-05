#include <iostream>

using namespace std;

int a, b;

bool isTrue(int i) {
    if(i == 1) {
        return false;
    }

    for(int j = 2; j < i; ++j) {
        if(i % j == 0) {
            return false;
        }
    }

    int t = 0;

    while(i > 0) {
        t += (i % 10);
        i /= 10;
    }

    return (t % 2 == 0);
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    int c = 0;

    for(int i = a; i <= b; ++i) {
        if(isTrue(i)) {
            ++c;
        }
    }

    cout << c;
    return 0;
}