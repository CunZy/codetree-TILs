#include <iostream>
using namespace std;

bool num(string &a) {
    char t = a[0];
    for(int i = 0; i < a.length(); ++i) {
        if(t != a[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;
    if(num(a)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}