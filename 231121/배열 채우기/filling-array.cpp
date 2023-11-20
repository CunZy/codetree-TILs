#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10];
    int c = -1;

    for(int i = 0; i < 10; ++i) {
        int n;
        cin >> n;
        if(n == 0) {
            break;
        }
        ++c;
        a[i] = n;
    }

    for(int i = c; i >= 0; --i) {
        cout << a[i] << " ";
    }
    return 0;
}