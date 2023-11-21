#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10];
    for(int i = 0; i < 10; ++i) {
        cin >> a[i];
    }
    int s1 = 0, s2 = 0;
    for(int i = 0; i < 10; ++i) {
        if(i % 2 == 1) {
            s1 += a[i];
        }
        if(i % 3 == 2) {
            s2 += a[i];
        }
    }

    cout << fixed;
    cout.precision(1);
    cout << s1 << " " << (double)s2 / 3 << endl;
    return 0;
}