#include <iostream>
using namespace std;

int Fibonacci(int n) {
    if(n == 1) {
        return 1;
    }
    if(n == 2) {
        return 1;
    }
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << Fibonacci(n);
    return 0;
}