#include <iostream>
#include <string>
using namespace std;

bool Equals(string &a) {
    string b = a;
    for(int i = 0; i < a.length(); ++i) {
        b[i] = a[a.length() - i - 1];
    }

    if(a == b) {
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

    if(Equals(a)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}