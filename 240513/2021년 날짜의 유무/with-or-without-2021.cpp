#include <iostream>
using namespace std;

int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool IsMonth(int m) {
    if(m <= 12) {
        return true;
    }
    return false;
}

bool IsTrue(int m, int d) {
    if(IsMonth(m)) {
        if(month[m - 1] >= d) {
            return true;
        }
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int m, d;
    cin >> m >> d;

    if(IsTrue(m, d)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}