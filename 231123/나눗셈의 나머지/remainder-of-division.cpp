#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    int r[10] = {};

    while(true) {
        int t = a / b;
        int e = a % b;
        r[e]++;
        a = t;

        if(t <= 1) {
            break;
        }
    }
    int u = 0;

    for(int i = 0; i < 10; ++i) {  
        u += r[i] * r[i];
    }

    cout << u;
    return 0;
}