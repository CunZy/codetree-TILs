#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;

    char b = a[1];
    char c = a[0];

    for(int i = 0; i < a.length(); ++i) {
        if(a[i] == b) {
            a[i] = c;
        }
    }

    cout << a;
    return 0;
}