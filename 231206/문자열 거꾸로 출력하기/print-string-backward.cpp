#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    while(true) {
        string a;
        cin >> a;

        if(a == "END") {
            break;
        }

        for(int i = 0; i < a.length(); ++i) {
            cout << a[a.length() - i - 1];
        }
        cout << endl;
    }
    return 0;
}