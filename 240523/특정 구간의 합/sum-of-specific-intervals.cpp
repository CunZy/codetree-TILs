#include <iostream>
using namespace std;

#define MAX 100

int a[MAX];



int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for(int i = 0; i < m; ++i) {
        int a1, a2;
        cin >> a1 >> a2;

        int sum = 0;

        for(int j = a1 - 1; j < a2; ++j) {
            sum += a[j];
        }

        cout << sum << endl;
    }
    return 0;
}