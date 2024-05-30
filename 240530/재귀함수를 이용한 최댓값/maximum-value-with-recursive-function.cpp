#include <iostream>
using namespace std;

int Max;
int a[100];

void getMax(int n) {
    if(Max < a[n]) {
        Max = a[n];
    }

    if(n == 0) {
        return;
    }

    getMax(n - 1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    getMax(n);
    cout << Max;
    return 0;
}