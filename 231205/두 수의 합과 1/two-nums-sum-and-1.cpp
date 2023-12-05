#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    int b, c;
    cin >> b >> c;

    int t = b + c;

    a = to_string(t);

    int cnt = 0;

    for(int i = 0; i < a.length(); ++i) {
        if(a[i] == '1') {
            ++cnt;
        }
    }

    cout << cnt;
    return 0;
}