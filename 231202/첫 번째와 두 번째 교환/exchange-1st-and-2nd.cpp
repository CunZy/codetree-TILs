#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;

    char c[2];
    for(int i = 0; i < 2; ++i) {
        c[i] = a[i];
    }

    for(int i = 0; i < a.length(); ++i) {
        if(a[i] == c[0]) {
            a[i] = c[1];
        }
        else if(a[i] == c[1]) {
            a[i] = c[0];
        }
    }

    cout << a;
    return 0;
}