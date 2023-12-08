#include <iostream>
using namespace std;

bool IsTrue(int n) {
    int a = n / 10;
    int b = n % 10;

    if((a + b) % 5 == 0 && n % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    if(IsTrue(n)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}