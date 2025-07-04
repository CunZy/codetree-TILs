#include <iostream>

using namespace std;

int M, D;

int day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isTrue2(int a, int b) {
    return day[a - 1] >= b;
}

bool isTrue(int a, int b) {
    return a <= 12 && a >= 1 && isTrue2(a, b);
}

int main() {
    cin >> M >> D;

    // Please write your code here.

    if(isTrue(M, D)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}