#include <iostream>
using namespace std;

string a, b;

bool IsSub(int start) {
    for(int j = 0; j < b.length(); ++j) {
        if(a[start + j] != b[j]) {
            return false;
        }
    }

    return true;
}

int Find() {
    for(int i = 0; i < a.length(); ++i) {
        if(IsSub(i)) {
            return i;
        }
    }

    return -1;
}

int main() {
    cin >> a >> b;

    cout << Find();
    return 0;
}