#include <iostream>
using namespace std;

int Time(int a, int b, int c, int d) {
    int z = a * 60 + b;
    int x = c * 60 + d;

    return x - z;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << Time(a, b, c, d);
    return 0;
}