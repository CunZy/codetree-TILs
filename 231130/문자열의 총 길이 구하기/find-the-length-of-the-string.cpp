#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a[10];

    for(int i = 0; i < 10; ++i) {
        cin >> a[i];
    }

    int c = 0;

    for(int i = 0; i < 10; ++i) {
        c += a[i].length();
    }

    cout << c << endl;
    return 0;
}