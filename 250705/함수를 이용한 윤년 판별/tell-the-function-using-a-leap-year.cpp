#include <iostream>

using namespace std;

int y;

bool isYear(int e) {
    if(e % 4 != 0) {
        return false;
    }
    if(e % 100 == 0 && e % 400 != 0) {
        return false;
    }
    return true;
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