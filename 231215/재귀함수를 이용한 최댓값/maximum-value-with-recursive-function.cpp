#include <iostream>
using namespace std;

int a[100];

int Max(int n) {
    if(n == 0) {
        return a[0];
    }

    if(a[n] > Max(n - 1)) {
        return a[n];
    }
    else {
        return Max(n - 1);
    }
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << Max(n);
    return 0;
}