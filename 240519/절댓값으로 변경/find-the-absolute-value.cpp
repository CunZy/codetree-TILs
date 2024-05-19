#include <iostream>
using namespace std;

#define max 50

int a[max];

void absol(int *t, int n) {
    for(int i = 0; i < n; ++i) {
        if(t[i] < 0) {
            t[i] *= -1;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    absol(a, n);

    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}