#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    cin >> a >> b;

    bool t = true;

    for(int i = 0; i < a.length(); ++i) {
        a = a.substr(a.length() - 1) + a.substr(0, a.length() - 1);
        if(a == b) {
            cout << i + 1 << endl;
            t = false;
            break;
        }
    }

    if(t) {
        cout << -1 << endl;
    }
    return 0;
}