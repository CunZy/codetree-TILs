#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int c = 0;

    while(true) {
        if(n % 2 == 0) {
            n = n / 2;
            ++c;
        }
        else {
            cout << c;
            break;
        }
    }
    return 0;
}