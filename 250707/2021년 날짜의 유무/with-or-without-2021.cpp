#include <iostream>

using namespace std;

int M, D;

int day(int m) {
    if(m == 2) {
        return 28;
    }
    else if(m == 4 || m == 6 || m == 9 || m == 11) {
        return 30;
    }
    return 31;
}

bool isExist(int m, int d) {
    if(m > 12) {
        return false;
    }

    if(d <= day(m)) {
        return true;
    }
    return false;
}

int main() {
    cin >> M >> D;

    // Please write your code here.

    if(isExist(M, D)) {
        cout << "Yes";
    }
    else 
        cout << "No";

    return 0;
}