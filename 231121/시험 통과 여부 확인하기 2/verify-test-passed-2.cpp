#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[4];
    int s = 0;
    int c = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < 4; ++j) {
            cin >> a[j];
            s += a[j];
        }
        if((double)s / 4 >= 60) {
            cout << "pass" << endl;
            ++c;
        }
        else {
            cout << "fail" << endl;
        }
        s = 0;
    }
    cout << c;
    return 0;
}