#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[100] = {};

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int b, c;
        cin >> b >> c;

        for(int j = b - 1; j < c - 1; ++j) {
            a[j] += 1;
        }
    }

    int max = a[0];
    for(int i = 0; i < 100; i++) {
        if(max < a[i]) {
            max = a[i];
        }
    }

    cout << max << endl;
    return 0;
}