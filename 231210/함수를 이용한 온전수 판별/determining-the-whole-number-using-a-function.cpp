#include <iostream>
using namespace std;

bool IsOn(int i) {
    if(i % 2 == 0) return false;
    else if(i % 10 == 5) return false;
    else if(i % 3 == 0 && i % 9 != 0) return false;

    return true; 
}

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b;

    cin >> a >> b;

    int c = 0;

    for(int i = a; i <= b; ++i) {
        if(IsOn(i)) {
            ++c;
        }
    }

    cout << c;
    return 0;
}