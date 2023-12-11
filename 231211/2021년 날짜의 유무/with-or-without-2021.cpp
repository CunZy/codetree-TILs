#include <iostream>
using namespace std;


bool IsMonth(int a) {
    if(a <= 0 || a > 12) {
        return false;
    }
    return true;
}

bool IsDay(int a, int b) {
    if(IsMonth(a)) {
        if(a == 2) {
            if(b <= 28) {
                return true;
            }
            return false;
        }
        else if(a < 8) {
            if(a % 2 == 1) {
                if(b <= 31) {
                    return true;
                }
            }
            else {
                if(b <= 30) {
                    return true;
                }
            }
        }
        else if(a >= 8) {
            if(a % 2 == 0) {
                if(b <= 31) {
                    return true;
                }
            }
            else {
                if(b <= 30) {
                    return true;
                }
            }
        }
        return false;
    }
    return false;
}

bool Exist(int a, int b) {
    return IsMonth(a) && IsDay(a, b);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int m, d;
    cin >> m >> d;

    if(Exist(m, d)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}