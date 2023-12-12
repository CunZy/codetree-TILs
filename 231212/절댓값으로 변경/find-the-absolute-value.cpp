#include <iostream>
using namespace std;

int n;

void Never(int *a) {
    for(int i = 0; i < n; ++i) {
        if(a[i] < 0) {
            a[i] *= -1;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    int a[50];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    Never(a);

    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}