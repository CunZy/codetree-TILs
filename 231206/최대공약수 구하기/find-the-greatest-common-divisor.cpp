#include <iostream>
using namespace std;

void Print(int n, int m) {
    int max = 0;
    if(n > m) {
        for(int i = 1; i < m; ++i) {
            if(n % i == 0 && m % i == 0) {
                max = i;
            }
        }
    }
    else {
        for(int i = 1; i < n; ++i) {
            if(n % i == 0 && m % i == 0) {
                max = i;
            }
        }
    }

    cout << max << endl;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m;
    cin >> n >> m;

    Print(n, m);
    return 0;
}