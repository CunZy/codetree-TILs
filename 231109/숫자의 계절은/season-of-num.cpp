#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin >> a;
    if(a >= 12 || a <= 2) {
        cout << "Winter";
    }
    else if(a <= 5) {
        cout << "Spring";
    }
    else if(a <= 8) {
        cout << "Summer";
    }
    else {
        cout << "Fall";
    }
    return 0;
}