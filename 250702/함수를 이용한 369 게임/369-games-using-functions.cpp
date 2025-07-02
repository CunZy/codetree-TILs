#include <iostream>

using namespace std;

int a, b;

bool isTrue3(int i) {
    if(i == 3 || i == 6 || i == 9) {
        return true;
    }
    return false;
}

bool isTrue2(int i) {
    while(i) {
        int t = i % 10;
        i = i / 10;

        if(isTrue3(t)) {
            return true;
        }
    }
    return false;
}

bool isTrue(int i) {
    if(i % 3 == 0 || isTrue2(i)) {
        return true;
    }
    return false;
}

void count(int n, int m) {
    int c = 0;
    for(int i = n; i <= m; ++i) {
        if(isTrue(i)) {
            c++;
        }
    }

    cout << c << endl;
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    count(a, b);
    return 0;
}