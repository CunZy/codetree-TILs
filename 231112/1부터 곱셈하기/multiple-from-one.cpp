#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int t = 1;

    for(int i = 1; i <= 10; ++i) {
        t *= i;
        if(t >= n) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}