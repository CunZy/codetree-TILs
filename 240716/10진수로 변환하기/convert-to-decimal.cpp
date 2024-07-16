#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int total[8] = {};
    int here = 0;

    while(true) {
        if(n / 10 == 0) {
            total[here++] = n;
            break;
        }

        total[here++] = n % 10;
        n /= 10;
    }

    int tn = 0;

    for(int i = here - 1; i >= 0; --i) {
        tn = tn * 2 + total[i];
    }

    cout << tn << endl;
    return 0;
}