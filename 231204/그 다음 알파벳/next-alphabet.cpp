#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    char a;
    cin >> a;

    if(a == 'z') {
        cout << (char)(a - 25);
    }
    else {
        cout << (char)(a + 1);
    }
    return 0;
}