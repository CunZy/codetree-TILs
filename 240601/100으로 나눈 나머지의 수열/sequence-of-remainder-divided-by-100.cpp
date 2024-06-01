#include <iostream>
using namespace std;

int getNum(int n) {
    if(n == 1) {
        return 2;
    }
    else if(n == 2) {
        return 4;
    }
    return (getNum(n - 1) * getNum(n - 2)) % 100;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    cout << getNum(n);
    return 0;
}