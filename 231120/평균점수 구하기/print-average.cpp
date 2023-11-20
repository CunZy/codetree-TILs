#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double n;
    double a[8];

    double s = 0;
    for(int i = 0; i < 8; ++i) {
        cin >> n;
        a[i] = n;
        s += a[i];
    }

    cout << fixed;
    cout.precision(1);
    cout << s / 8 << endl;
    return 0;
}