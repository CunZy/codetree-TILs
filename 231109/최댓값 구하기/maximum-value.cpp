#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;
    int m = a;
    if(m < b) {
        m = b;
    }
    
    if(m < c) {
        m = c;
    }

    cout << m;
    return 0;
}