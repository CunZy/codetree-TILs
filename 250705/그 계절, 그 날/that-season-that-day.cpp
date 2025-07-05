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

bool exist(int y, int m, int d) {
    int day[13] = {0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    day[2] = isYear(y) ? 29 : 28;

    return d <= day[m];
}

int main() {
    cin >> Y >> M >> D;

    // Please write your code here.
    if(!exist(Y, M, D)) {
        cout << -1;
        return 0;
    }

    if(3 <= m && m <= 5) {
        cout << "Spring";
    }
    else if(6 <= m && m <= 8) {
        cout << "Summer";
    }
    else if(9 <= m && m <= 11) {
        cout << "Fall";
    }
    else {
        cout << "Winter";
    }

    return 0;
}