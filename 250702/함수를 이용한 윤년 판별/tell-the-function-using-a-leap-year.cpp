#include <iostream>

using namespace std;

int y;

bool isYear(int r) {
    if(r % 100 == 0 && r % 400 != 0) {
        return false;
    }
    if(r % 4 == 0) {
        return true;
    }
    return false;
}

int main() {
    cin >> y;

    // Please write your code here.
    if(isYear(y)) {
        cout << "true";
    }
    else {
        cout << "false";
    }
    return 0;
}