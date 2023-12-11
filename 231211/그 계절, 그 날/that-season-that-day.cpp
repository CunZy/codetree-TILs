#include <iostream>
#include <string>
using namespace std;

bool IsYear(int a) {
    if(a % 400 == 0) {
        return true;
    }
    else if(a % 100 == 0) {
        return false;
    }
    else if(a % 4 == 0) {
        return true;
    }

    return false;
}

bool IsMonth(int b) {
    if(b <= 0 && b > 12) {
        return false;
    }
    else {
        return true;
    }
}

int Day(int a, int b) {
    if(IsYear(a)) {
        if(b == 2) {
            return 29;
        }
        else if(b == 4 || b == 6 || b == 9 || b == 11) {
            return 30;
        }
        return 31;
    }
    else {
        if(b == 2) {
            return 28;
        }
        else if(b == 4 || b == 6 || b == 9 || b == 11) {
            return 30;
        }
        return 31;
    }
}
 
bool Exist(int a, int b, int c) {
    if(IsYear(a)) {
        if(IsMonth(b) && c <= Day(a, b)) {
            return true;
        }
        else {
            return false;
        }
    }
    else {
        if(IsMonth(b) && c <= Day(a, b)) {
            return true;
        }
        else {
            return false;
        }
    }
}

void Season(int m) {
    if(m >= 3 && m <= 5) {
        cout << "Spring";
    }
    else if(m >= 6 && m <= 8) {
        cout << "Summer";
    }
    else if(m >= 9 && m <= 11) {
        cout << "Fall";
    }
    else if(m >= 12 || m <= 2) {
        cout << "Winter";
    }
} 

int main() {
    // 여기에 코드를 작성해주세요.

    int y, m, d;
    cin >> y >> m >> d;

    if(Exist(y, m, d)) {
        Season(m);
    }  
    else {
        cout << -1;
    }
    return 0;
}