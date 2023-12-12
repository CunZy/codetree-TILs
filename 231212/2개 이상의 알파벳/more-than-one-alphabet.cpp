#include <iostream>
#include <string>
using namespace std;

bool IsTrue(string &a) {
    int w = 0;
    char c = a[0];
    for(int i = 1; i < a.length(); ++i) {
        if(c != a[i]) {
            ++w;
            c = a[i];
        }
    }

    if(w >= 2) {
        return true;
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;

    if(IsTrue(a)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}