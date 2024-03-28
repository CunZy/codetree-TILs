#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;
    string b = a.substr(1, a.length() - 1) + a.substr(0, 1);

    cout << b;
    return 0;
}