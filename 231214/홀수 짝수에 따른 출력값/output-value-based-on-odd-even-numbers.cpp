#include <iostream>
using namespace std;

int Sol(int n) {
    if(n == 1) {
        return 1;
    }
    return Sol(n - 2) + n;
}

int Even(int n) {
    if(n == 2) {
        return 2;
    }
    return Sol(n - 2) + n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    if(n % 2 == 0) {
        cout << Even(n);
    }
    else {
        cout << Sol(n);
    }
    return 0;
}