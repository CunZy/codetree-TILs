#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;

    while(true) {
        if(a.length() == 1) {
            break;
        }
        int c;
        cin >> c;

        if(c >= a.length()) {
            a.erase(a.length() - 1, 1);
        }
        else {
            a.erase(c, 1);
        }
        cout << a << endl;
    }

    return 0;
}