#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    string c = "", d = "";
    cin >> a >> b;
    c = a + b;
    d = b + a;

    bool s = true;

    for(int i = 0; i < c.length(); ++i) {
        if(c[i] != d[i]) {
            s = false;
            break;
        }
    }

    if(s) {
        cout << "true";
    }
    else {
        cout << "false";
    }
    return 0;
}