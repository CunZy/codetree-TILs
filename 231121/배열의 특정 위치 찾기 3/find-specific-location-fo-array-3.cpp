#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[100];
    int c = 0;
    while(true) {
        int n;
        cin >> n;
        if(n == 0) {
            break;
        }
        a[c] = n;
        ++c;
    }

    cout << a[c - 1] + a[c - 2] + a[c - 3] << endl;
    return 0;
}