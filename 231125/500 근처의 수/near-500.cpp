#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10];
    int b[1001] = {};

    for(int i = 0; i < 10; ++i) {
        cin >> a[i];
        b[a[i]]++;
    }

    for(int i = 500; i >= 1; --i) {
        if(b[i] != 0) {
            cout << i << " ";
            break;
        }
    }

    for(int i = 500; i <= 1000; ++i) {
        if(b[i] != 0) {
            cout << i << " ";
            break;
        }
    }
    return 0;
}