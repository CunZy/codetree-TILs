#include <iostream>

using namespace std;

int a, b;

bool isGood(int i) {
    if(i == 1) {
        return false;
    }

    for(int j = 2; j < i; ++j) {
        if(i % j == 0) {
            return false;
        }
    }

    int q = i;
    int t = 0;
    while(i > 0) {
        t += (i % 10);
        i /= 10;
    }

    // return t % 2 == 0;
    // cout << t << endl;
    if(t % 2 == 0) {
        // cout << q << endl;
        return true;
    }
    return false;
}

int main() {
    cin >> a >> b;

    int count = 0;
    // Please write your code here.
    for(int i = a; i <= b; ++i) {
        if(isGood(i)) {
            ++count;
        }
    }

    cout << count;
    return 0;
}