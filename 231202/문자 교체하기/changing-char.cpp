#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    cin >> a >> b;

    for(int i = 0; i < 2; ++i) {
        b[i] = a[i];
    }

    cout << b << endl;
    return 0;
}