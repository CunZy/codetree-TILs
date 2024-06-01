#include <iostream>
using namespace std;

int getNum(int n){
    if(n == 1) {
        return 0;
    }
    if(n % 2 == 0) {
        return getNum(n / 2) + 1;
    }
    else {
        return getNum(n * 3 + 1) + 1;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    cout << getNum(n);
    return 0;
}