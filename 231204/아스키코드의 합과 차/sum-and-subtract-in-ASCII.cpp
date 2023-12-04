#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char a, b;
    cin >> a >> b;

    int c = (int)a;
    int d = (int)b;

    cout << a + b << " ";

    if(c > d) {
        cout << c - d;
    }
    else {
        cout << d - c;
    }
    return 0;
}