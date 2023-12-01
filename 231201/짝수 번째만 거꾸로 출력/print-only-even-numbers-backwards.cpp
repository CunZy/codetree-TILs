#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;

    char b[100];
    int c = 0;
    for(int i = 0; i < a.length(); ++i) {
        if((i + 1) % 2 == 0) {
            b[c] = a[i];
            ++c;
        }
    }

    for(int i = 0; i < c; ++i) {
        cout << b[c - i - 1];
    }
    return 0;
}