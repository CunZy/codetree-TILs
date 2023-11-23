#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int m;
    cin >> m;

    int a[100];
    int b = 0;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i] == m) {
            ++b;
        }
    }

    cout << b;
    return 0;
}