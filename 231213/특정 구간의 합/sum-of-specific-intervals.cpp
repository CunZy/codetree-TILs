#include <iostream>
using namespace std;

int a[100];

int IsSum(int n, int m) {
    int sum = 0;
    for(int i = n - 1; i < m; ++i) {
        sum += a[i];
    }

    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for(int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;

        cout << IsSum(a, b) << endl;
    }
    return 0;
}