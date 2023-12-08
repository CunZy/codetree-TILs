#include <iostream>
using namespace std;

bool IsYear(int n) {
    if(n % 400 == 0) {
        return true;
    }
    if(n % 100 == 0) {
        return false;
    }
    if(n % 4 == 0) {
        return true;
    }

    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;

    if(IsYear(n)) {
        cout << "true";
    }
    else {
        cout << "false";
    }
    return 0;
}