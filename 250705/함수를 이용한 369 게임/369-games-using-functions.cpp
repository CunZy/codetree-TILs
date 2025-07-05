#include <iostream>

using namespace std;

int a, b;

bool isTrue2(int e) {
    while(e > 0) {
        if(e % 10 == 3 || e % 10 == 6 || e % 10 == 9) {
            return true;
        }
        e /= 10;
    }
    return false;
}

bool isTrue(int w) {
    return w % 3 == 0 || isTrue2(w);
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

    cout << c << endl;
    return 0;
}