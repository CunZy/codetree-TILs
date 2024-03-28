#include <iostream>
#include <cctype>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;

    for(int i = 0; i < a.length(); ++i) {
        if(isalpha(a[i])) {
            cout << (char)toupper(a[i]);
        }
    }

    return 0;
}