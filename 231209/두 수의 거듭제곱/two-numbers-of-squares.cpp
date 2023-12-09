#include <iostream>
using namespace std;

int sq(int a, int b) {
    int t = 1;
    for(int i = 0; i < b; ++i) {
        t *= a;
    }

    return t;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b;
    cin >> a >> b;

    cout << sq(a, b);
    return 0;
}