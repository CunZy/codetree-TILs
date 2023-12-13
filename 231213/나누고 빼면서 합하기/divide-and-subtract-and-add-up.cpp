#include <iostream>
using namespace std;

int a[100];
int n, m;

int SumAndDiv(int m) {
    int sum = 0;
    while(m != 1) {
        if(m % 2 == 1) {
            sum += a[m - 1];
            m -= 1;
        }
        else {
            sum += a[m - 1];
            m /= 2;
        }
    }

    sum += a[0];
    
    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << SumAndDiv(m);
    return 0;
}