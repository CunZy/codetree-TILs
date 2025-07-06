#include <iostream>
#include <string>

using namespace std;

string A;

bool isTrue(string s) {
    for(int i = 0; i < (int)s.size(); ++i) {
        if(s[i] != s[s.size() - i - 1]) {
            return false;
        }
    }

    return true;
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