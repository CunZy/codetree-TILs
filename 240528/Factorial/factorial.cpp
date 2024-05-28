#include <iostream>
using namespace std;

int Factorial(int n) {
    if(n == 0) {
        return 1;
    }
    if(n == 1) {
        return 1;
    }
    return Factorial(n - 1) * n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << Factorial(n);
    return 0;
}