#include <iostream>
using namespace std;

int a[100];

int Max(int n) {
    if(n == 0) {
        return a[0];
    }

    int before = Max(n - 1);

    if(a[n] < before) {
        return before;
    }
    else {
        return a[n];
    }
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << Max(n - 1);
    return 0;
}