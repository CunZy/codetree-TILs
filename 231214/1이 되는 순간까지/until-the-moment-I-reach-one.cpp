#include <iostream>
using namespace std;

int Sum(int n) {
    if(n == 1) {
        return 0;
    }
    if(n % 2 == 0) {
        return Sum(n /= 2) + 1;
    }
    else {
        return Sum(n /= 3) + 1;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    cout << Sum(n);
    return 0;
}