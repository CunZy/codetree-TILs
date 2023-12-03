#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;

    // a.erase(1, 1);
    // a.erase(a.length() - 2, 1);

    string b = a.substr(0, 1);
    string c = a.substr(2, a.length() - 4);
    string d = a.substr(a.length() - 1);
    cout << b + c + d;

    return 0;
}