#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a = 0;

    while(true) {
        if(n == 1) {
            cout << a;
            break;
        }
        else {
            if(n % 2 == 0) {
                n /= 2;
                ++a;
            }
            else {
                n *= 3;
                n += 1;
                ++a;
            }
        }
    }
    return 0;
}