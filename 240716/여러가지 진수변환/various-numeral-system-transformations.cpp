#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int b;
    cin >> b;

    int total[20] = {};

    int here = 0;

    while(true) {
        if(n < b) {
            total[here++] = n;
            break;
        }

        total[here++] = n % b;
        n /= b;
    }

    for(int i = here - 1; i >= 0; --i) {
        cout << total[i];
    }
    return 0;
}