#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;

    a = a.substr(1, a.length() - 1) + a.substr(0, 1);

    cout << a;
    return 0;
}