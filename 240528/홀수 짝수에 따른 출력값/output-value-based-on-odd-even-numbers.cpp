#include <iostream>
using namespace std;

int total(int n) {
    if(n % 2 == 0) {
        if(n == 2) {
            return 2;
        }
        return total(n - 2) + n;
    }
    else {
        if(n == 1) {
            return 1;
        }
        return total(n - 2) + n;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    cout << total(n);
    return 0;
}