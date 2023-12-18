#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    cin >> a >> b;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if(a.length() != b.length()) {
        cout << "No";
    }
    else {
        bool t = true;
        for(int i = 0; i < a.length(); ++i) {
            if(a[i] != b[i]) {
                t = false;
                break;
            }
        }

        if(t) {
            cout << "Yes";
        }
        else {
            cout << "No";
        }
    }
    return 0;
}