#include <iostream>
#include <algorithm>
using namespace std;

int a[100];
int b[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    

    for(int i = 0; i < n; ++i) {
        b[i] = a[i];
        sort(b, b + i + 1);
        if(i % 2 == 0) {
            cout << b[i / 2] << " ";
        }
    }

    return 0;
}