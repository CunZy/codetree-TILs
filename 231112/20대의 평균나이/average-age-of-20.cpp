#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int s = 0;
    int t = 0;

    while(true) {
        cin >> n;
        if(n < 20 || n >= 30) {
            cout << fixed;
            cout.precision(2);
            cout << (double)s / t;
            break;
        }
        ++t;
        s += n;
    }
    return 0;
}