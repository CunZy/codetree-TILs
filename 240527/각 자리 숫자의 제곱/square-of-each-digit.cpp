#include <iostream>
using namespace std;

int change(int n) {
    if(n < 10) {
        return n * n;
    }
    return change(n / 10) + (n % 10) * (n % 10);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << change(n);
    return 0;
}