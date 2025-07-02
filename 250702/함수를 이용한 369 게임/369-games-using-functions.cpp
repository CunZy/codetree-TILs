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
    int q = i / 100;
    int w = (i % 100) / 10;
    int e = i % 10;

    return isTrue3(q) || isTrue3(w) || isTrue3(e);
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