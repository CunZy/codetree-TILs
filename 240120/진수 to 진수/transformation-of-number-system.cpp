#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    string n;
    cin >> n;

    int num = 0;

    for(int i = 0; i < n.length(); ++i) {
        num = num * a + (n[i] - '0');
    }

    int t[20] = {};

    int cnt = 0;

    while(true) {
        if(num < b) {
            t[cnt] = num;
            break;
        }

        t[cnt++] = num % b;
        num /= b;
    }

    for(int i = cnt; i >= 0; --i) {
        cout << t[i];
    }

    return 0;
}