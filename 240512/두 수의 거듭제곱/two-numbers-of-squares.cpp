#include <iostream>
using namespace std;

int gop(int a, int b) {
    int total = 1;
    for(int i = 0; i < b; ++i) {
        total *= a;
    }

    return total;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    cout << gop(a, b);
    return 0;
}