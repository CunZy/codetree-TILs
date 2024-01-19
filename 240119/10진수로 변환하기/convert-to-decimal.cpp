#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;

    int b[8] = {};
    for(int i = 0; i < a.length(); ++i) {
        b[i] = a[i] - '0';
    }

    int n = 0;

    for(int i = 0; i < a.length(); ++i) {
        n = n * 2 + b[i];
    }

    cout << n << endl;
    return 0;
}