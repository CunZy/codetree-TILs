#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int s;
    int n;
    cin >> n >> s;
    int a[100] = {};

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int gap = INT_MAX;

    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            int sum = 0;
            for(int k = 0; k < n; ++k) {
                if(k == i || k == j) {
                    continue;
                }
                else {
                    sum += a[k];
                }
            }

            if(gap > abs(s - sum)) {
                gap = abs(s - sum);
            }
        }
    }

    cout << gap << endl;
    return 0;
}