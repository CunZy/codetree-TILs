#include <iostream>

using namespace std;

int Y, M, D;

bool isYear(int y) {
    if(y % 4 != 0) {
        return false;
    }
    if(y % 100 != 0) {
        return true;
    }
    if(y % 400 == 0) {
        return true;
    }
    return false;
}

int day(int y, int m) {
    if(isYear(y)) {
        if(m == 2) {
            return 29;
        }
    }
    else {
        if(m == 2) {
            return 28;
        }
    }
    
    if(m == 4 || m == 6 || m == 9 || m == 11) {
        return 30;
    }
    else {
        return 31;
    }
}

void print(int y, int m, int d) {
    if(d <= day(y, m)) {
        if(m <= 2 || m >= 12) {
            cout << "Winter";
        }
        else if(m <= 5) {
            cout << "Spring";
        }
        else if(m <= 8) {
            cout << "Summer";
        }
        else {
            cout << "Fall";
        }
    }
    else {
        cout << -1;
    }
}

int main() {
    cin >> Y >> M >> D;

    // Please write your code here.
    print(Y, M, D);
    return 0;
}