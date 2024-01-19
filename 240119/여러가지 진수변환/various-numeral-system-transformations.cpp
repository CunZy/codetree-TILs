#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int b;
    cin >> n >> b;


    int a[20];

    int t = 0;

    while(true) {
        if(n < b) {
            a[t] = n;
            break;
        }
        a[t] = n % b;
        n = n / b;
        ++t;
    }

    for(int i = t; i >= 0; --i) {
        cout << a[i];
    }
    return 0;
}