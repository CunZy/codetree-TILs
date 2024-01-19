#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string n;
    cin >> n;

    int a[10];
    for(int i = 0; i < n.length(); ++i) {
        a[i] = n[i] - '0';
    }

    int num = 0;
    for(int i = 0; i < n.length(); ++i) {
        num = num * 2 + a[i];
    }

    num *= 17;

    int b[20];
    int t = 0;
    while(true) {
        if(num < 2) {
            b[t] = num;
            break;
        }

        b[t++] = num % 2;
        num /= 2;
    }

    for(int i = t; i >= 0; --i) {
        cout << b[i];
    }
    return 0;
}