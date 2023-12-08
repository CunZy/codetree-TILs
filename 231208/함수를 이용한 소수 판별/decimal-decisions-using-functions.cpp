#include <iostream>
using namespace std;

bool Prime(int n) {
    if(n == 1) {
        return false;
    }
    for(int i = 2; i < n; ++i) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

int Sum(int a, int b) {
    int sum = 0;
    for(int i = a; i <= b; ++i) {
        if(Prime(i)) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    cout << Sum(a, b);
    return 0;
}