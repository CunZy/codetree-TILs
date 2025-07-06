#include <iostream>
#include <string>

using namespace std;

string A;

bool isTrue(string s) {
    for(int i = 0; i < s.length(); ++i) {
        if(s[0] != s[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    cin >> A;

    // Please write your code here.
    if(isTrue(A)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}