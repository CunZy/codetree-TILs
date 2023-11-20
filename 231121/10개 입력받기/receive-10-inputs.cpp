#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10];
    int c = 0;
    int s = 0;

    for(int i = 0; i < 10; ++i) {
        int n;
        cin >> n;
        if(n == 0) {
            break;
        }
        ++c;
        a[i] = n;
        s += n;
    }

    cout << fixed;
    cout.precision(1);
    cout << s << " " << (double)s / c << endl;
    return 0;
}