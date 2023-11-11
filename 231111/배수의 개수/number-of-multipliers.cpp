#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0;
    for(int i = 0; i < 10; ++i) {
        int t;
        cin >> t;
        if(t % 3 == 0) {
            ++a;
        }
        if(t % 5 == 0) {
            ++b;
        }
    }

    cout << a << " " << b;
    return 0;
}