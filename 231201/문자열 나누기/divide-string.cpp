#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    string a[10];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    string s = "";

    for(int i = 0; i < n; ++i) {
        s.append(a[i]);
    }

    for(int i = 0; i < s.length(); ++i) {
        if(i % 5 != 0) {
            cout << s[i];
        }
        else {
            if(i != 0) {
                cout << endl;
            }
            cout << s[i];
        }
    }
    return 0;
}