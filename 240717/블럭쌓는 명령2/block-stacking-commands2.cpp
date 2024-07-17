#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int q[100] = {};

    int k;
    cin >> k;

    for(int i = 0; i < k; ++i) {
        int a, b;
        cin >> a >> b;

        for(int j = a - 1; j < b; ++j) {
            q[j] += 1;
        }
    }

    int max = q[0];
    int index = 0;

    for(int i = 0; i < n; ++i) {
        if(max < q[i]) {
            index = i;
            max = q[i];
        }
    }

    cout << max << endl;
    return 0;
}