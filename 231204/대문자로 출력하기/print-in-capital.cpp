#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    string a;
    cin >> a;

    for(int i = 0; i < a.length(); ++i) {
        if(a[i] >= 'a' && a[i] <= 'z') {
            cout << (char)toupper(a[i]);
        }
        else if(a[i] >= 'A' && a[i] <= 'Z') {
            cout << a[i];
        }
    }
    return 0;
}