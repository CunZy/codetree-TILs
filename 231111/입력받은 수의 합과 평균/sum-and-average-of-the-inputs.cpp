#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int s = 0;
    for(int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        s += t;
    }

    cout << s << " ";
    cout << fixed;
    cout.precision(1);
    cout << (double)s / n;
    return 0;
}