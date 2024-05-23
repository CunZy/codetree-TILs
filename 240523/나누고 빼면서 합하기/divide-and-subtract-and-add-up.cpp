#include <iostream>
using namespace std;

#define MAX 100

int a[MAX];

void Modify(int m, int &s) {
    if(m == 1) {
        s += a[0];
        return;
    }
    
    if(m > 1) {
        s += a[m - 1];
        if(m % 2 == 0) {
            m /= 2;
        }
        else {
            m -= 1;
        }
        Modify(m, s);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int sum = 0;

    Modify(m, sum);

    cout << sum << endl;
    return 0;
}