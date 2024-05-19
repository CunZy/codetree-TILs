#include <iostream>
using namespace std;

bool p(string &a) {
    string b = "";
    for(int i = 0; i < a.length(); ++i) {
        b += a[a.length() - i - 1];
    }

    if(b == a) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;

    if(p(a)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}