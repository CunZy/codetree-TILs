#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int c = 0;

    for(int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        c += t;
    }

    string a = to_string(c);

    a = a.substr(1) + a.substr(0, 1);

    cout << a;
    return 0;
}