#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;

    a[1] = 'a';
    a[a.length() - 2] = 'a';

    cout << a << endl;
    return 0;
}