#include <iostream>
using namespace std;

int getNum(int n) {
    if(n < 10) {
        return n;
    }
    return getNum(n / 10) + n % 10;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;

    cout << getNum(a * b * c);
    return 0;
}