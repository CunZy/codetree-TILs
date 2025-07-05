#include <iostream>
#include <string>

using namespace std;

string A;

bool isTrue(string &a) {
    for(int i = 0; i < a.length(); ++i) {
        if(a[i] != a[a.length() - i - 1]) {
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
    else 
        cout << "No";
    return 0;
}