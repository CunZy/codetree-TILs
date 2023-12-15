#include <iostream>
using namespace std;

int Print(int n) {
    if(n / 10 == 0) {
        return n;
    }
    return (n % 10) + Print(n / 10);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a[3];
    for(int i = 0; i < 3; ++i) {
        cin >> a[i];
    }
    
    int n = 1;
    for(int i = 0; i < 3; ++i) {
        n *= a[i];
    }

    cout << Print(n);
    return 0;
}