#include <iostream>
using namespace std;

bool IsYear(int year) {
    if(year % 100 == 0) {
        if(year % 400 != 0) {
            return false;
        }   
    }
    if(year % 4 == 0) {
        return true;
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    if(IsYear(n)) {
        cout << "true";
    }
    else {
        cout << "false";
    }
    return 0;
}