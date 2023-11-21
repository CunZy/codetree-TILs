#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10];
    int s1 = 0, s2 = 0;

    for(int i = 0; i < 10; ++i) {
        cin >> a[i];
        if((i + 1) % 2 == 1) {
            s1 += a[i];
        }
        else {
            s2 += a[i];
        }
    }

    if(s1 > s2) {
        cout << s1 - s2;
    }
    else {
        cout << s2 - s1;
    }
    return 0;
}