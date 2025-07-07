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
    if(m == 2) {
        if(isYear(y)) {
            return 29;
        }
        else {
            return 28;
        }
    }
    else if(m == 4 || m == 6 || m == 9 || m == 11) {
        return 30;
    }
    return 31;
}

bool isExist(int y, int m, int d) {
    if(m <= 12 && d <= day(y, m)) {
        return true;
    }
    return false;
}

string season(int m) {
    if(m == 12 || m <= 2) {
        return "Winter";
    }
    else if(m >= 3 && m <= 5) {
        return "Spring";
    }
    else if(m >= 6 && m <= 8) {
        return "Summer";
    }
    else if(m >= 9 && m <= 11) {
        return "Fall";
    }
}

int main() {
    cin >> Y >> M >> D;

    // Please write your code here.
    if(isExist(Y, M, D)) {
        cout << season(M);
    }
    else {
        cout << -1;
    }
    return 0;
}