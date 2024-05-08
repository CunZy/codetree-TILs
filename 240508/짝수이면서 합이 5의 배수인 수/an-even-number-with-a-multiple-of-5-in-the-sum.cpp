#include <iostream>
using namespace std;

bool IsMagic(int n) {
    int a = n / 10;
    int b = n % 10;
    return n % 2 == 0 && (a + b) % 5 == 0;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    if(IsMagic(n)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}