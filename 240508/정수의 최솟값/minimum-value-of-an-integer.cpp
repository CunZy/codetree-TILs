#include <iostream>
using namespace std;

int min(int a, int b, int c) {
    int m = a;
    if(m > b) {
        m = b; 
    }
    if(m > c) {
        m = c;
    }

    return m;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;

    cout << min(a, b, c);
    return 0;
}