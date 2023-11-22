#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[100];
    int c = 0;
    for(int i = 0; i < 100; ++i) {
        cin >> a[i];
        if(a[i] == 0) {
            break;
        }
        ++c;
    }

    for(int i = 0; i < c; ++i) {
        if(a[i] % 2 == 0) {
            cout << a[i] / 2 << " ";
        }
        else {
            cout << a[i] + 3 << " ";
        }
    }
    return 0;
}