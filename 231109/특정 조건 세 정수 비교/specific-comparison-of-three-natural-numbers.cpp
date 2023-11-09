#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    if((a <= b) && (a <= c)) {
        cout << 1 << ' ';
    }
    else {
        cout << 0 << " ";
    }

    cout << (a == b && a == c);
    return 0;
}