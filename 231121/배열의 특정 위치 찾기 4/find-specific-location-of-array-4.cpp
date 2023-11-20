#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10];
    int c = 0;

    for(int i = 0; i < 10; ++i) {
        cin >> a[i];
        if(a[i] == 0) {
            break;
        }
        ++c;
    }

    int s = 0;
    int t = 0;
    for(int i = 0; i < c; ++i) {
        if(a[i] == 0) {
            break;
        }
        else if(a[i] % 2 == 0) {
            s += a[i];
            ++t;
        }
    }

    cout << t << " " << s;
    return 0;
}