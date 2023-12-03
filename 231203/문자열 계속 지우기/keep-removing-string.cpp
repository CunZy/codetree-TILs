#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;

    cin >> a >> b;

    while(true) {
        bool t = false;
        for(int i = 0; i < a.length() - b.length() + 1; ++i) {
            bool w = true;
            for(int j = 0; j < b.length(); ++j) {
                if(a[i + j] != b[j]) {
                    if(i == a.length() - b.length()) {
                        t = true;
                    }
                    w = false;
                    break;
                }
            }
            if(w) {
                a.erase(i, b.length());
                break;
            }
        }

        if(t) {
            break;
        }
    }

    cout << a;
    return 0;
}