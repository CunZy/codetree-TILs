#include <iostream>
using namespace std;

int num[50];

void Divide(int *x, int n) {
    for(int i = 0; i < n; ++i) {
        if(x[i] % 2 == 0) {
            x[i] /= 2;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> num[i];
    }

    Divide(num, n);

    for(int i = 0; i < n; ++i) {
        cout << num[i] << " ";
    }
    return 0;
}