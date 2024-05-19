#include <iostream>
using namespace std;

void change(int &a, int &b) {
    if(a < b) {
        a += 10;
        b *= 2;
    }
    else {
        a *= 2;
        b += 10;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    
    change(a, b);
    cout << a << " " << b;
    return 0;
}