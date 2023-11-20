#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10] = {};

    int c = 0;
    for(int i = 0; i < 10; ++i) {
        int t;
        cin >> t;

        if(t >= 250) {
            break;
        }
        ++c;
        a[i] = t;
    }

    int s = 0;
    for(int i = 0; i < 10; ++i) {
        s += a[i];
    }

    cout << s << " ";
    cout << fixed;
    cout.precision(1);
    cout << (double)s / c;
    return 0;
}