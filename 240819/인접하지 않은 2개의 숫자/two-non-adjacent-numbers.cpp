#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[100] = {};

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int max = INT_MIN;

    for(int i = 0; i < n - 2; ++i) {
        for(int j = i + 2; j < n; ++j) {
            int t = a[i] + a[j];
            if(t > max) {
                max = t;
            }
        }
    }

    cout << max << endl;
    return 0;
}