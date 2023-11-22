#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int a[100];
    cin >> n;
    a[1] = n;
    a[0] = 1;

    cout << a[0] << " " << a[1] << " ";

    for(int i = 2; i < 100; ++i) {
        a[i] = a[i - 1] + a[i - 2];
        cout << a[i] << " ";
        if(a[i] >= 100) {
            break;
        }
    }
    return 0;
}