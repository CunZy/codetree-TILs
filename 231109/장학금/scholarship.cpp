#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int mid, fin;
    cin >> mid >> fin;

    if(mid < 90) {
        cout << 0;
    }
    else if(fin >= 95) {
        cout << 100000;
    }
    else if(fin >= 90) {
        cout << 50000;
    }
    else {
        cout << 0;
    }
    return 0;
}