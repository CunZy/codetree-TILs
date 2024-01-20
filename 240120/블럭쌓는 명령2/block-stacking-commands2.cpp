#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[101] = {};
    int n, A, B, k;

    cin >> n >> k;

    for(int i = 0; i < k; ++i) {
        cin >> A >> B;
        for(int i = A; i <= B; ++i) {
            a[i]++;
        }
    }

    int max = 0;

    for(int i = 1; i <= n; ++i) {
        if(max < a[i]) {
            max = a[i];
        }

    }

    cout << max << endl;
    return 0;
}