#include <iostream>
using namespace std;


bool IsYear(int y) {
    if(y % 4 == 0) {
        if(y % 100 == 0) {
            if(y % 400 == 0) {
                return true;
            }
            else {
                return false;
            }
        }
        else {
            return true;
        }
    }
    else {
        return false;
    }
    return false;
}

int Day(int y, int m) {
    if(IsYear(y)) {
        if(m == 2) {
            return 29;
        }
        else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
            return 31;
        }
        return 30;
    }
    else {
        if(m == 2) {
            return 28;
        }
        else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
            return 31;
        }
        return 30;
    }
}

bool IsTrue(int y, int m, int d) {
    if(m <= 12 && d <= Day(y, m)) {
        return true;
    }
    return false;
}

string gye(int m) {
    if(m >= 3 && m <= 5) {
        return "Spring";
    }
    else if(m >= 6 && m <= 8) {
        return "Summer";
    }
    else if(m >= 9 && m <= 11) {
        return "Fall";
    }
    else if(m == 12 || (m <= 2 && m >= 1)) {
        return "Winter";
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int y, m, d;
    cin >> y >> m >> d;

    if(IsTrue(y, m, d)) {
        cout << gye(m) << endl;
    }
    else {
        cout << "-1";
    }
    return 0;
}