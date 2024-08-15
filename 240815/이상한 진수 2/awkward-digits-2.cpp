#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    // int n;
    // cin >> n;

    // int a[20] = {};

    // int here = 0;

    // while(true) {
    //     if(n < 2) {
    //         a[here] = n;
    //         break;
    //     }

    //     a[here++] = n % 2;
    //     n /= 2;
    // }

    string b;
    cin >> b;

    int max = INT_MIN;

    for(int i = 0; i < b.length(); ++i) {
        int sum = 0;
        if(b[i] == '0') {
            b[i] = '1';
        }
        else {
            b[i] = '0';
        }

        for(int j = 0; j < b.length(); ++j) {
            sum = sum * 2 + (b[j] - '0');
        }

        if(sum > max) {
            max = sum;
        }
        if(b[i] == '0') {
            b[i] = '1';
        }
        else {
            b[i] = '0';
        }

        // cout << sum << endl;
    }
    
    cout << max << endl;
    return 0;
}