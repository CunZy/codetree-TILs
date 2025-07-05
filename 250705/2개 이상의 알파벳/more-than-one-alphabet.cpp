#include <iostream>
#include <string>

using namespace std;

string A;

bool isTrue(string a) {
    for(int i = 0; i < (int)a.size() - 1; ++i) {
        if(a[i] != a[i + 1]) {
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
    else 
        cout << "No";
    return 0;
}