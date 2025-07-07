#include <iostream>

using namespace std;

int a, b;

bool isTrue(int i) {
    if(i % 2 == 0) {
        return false;
    }
    if(i % 10 == 5) {
        return false;
    }
    if(i % 3 == 0 && i % 9 != 0) {
        return false;
    }
    return true;
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