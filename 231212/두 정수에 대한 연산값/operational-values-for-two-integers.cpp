#include <iostream>
using namespace std;

void Good(int &a, int &b) {
    a += 25;
    b *= 2;
}


int main() {
    // 여기에 코드를 작성해주세요.

    int a, b;
    cin >> a >> b;

    if(a > b) {
        Good(a, b);
    }
    else {
        Good(b, a);
    }

    cout << a << " " << b;
    return 0;
}