#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;

    a.erase(1, 1);
    string b = a.substr(0, a.length() - 2) + a.substr(a.length() - 1, 1);

    cout << b;
    return 0;
}