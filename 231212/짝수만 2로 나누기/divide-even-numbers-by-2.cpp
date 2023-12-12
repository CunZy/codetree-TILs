#include <iostream>
using namespace std;

void Even(int a[], int n) {
    for(int i = 0; i < n; ++i) {
        if(a[i] % 2 == 0) {
            a[i] /= 2;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a[50];
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    Even(a, n);

    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}