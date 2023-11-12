#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;
    int t = n;

    for(int i = 1; i <= n; ++i) {
        t /= i;
        if(t <= 1) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}