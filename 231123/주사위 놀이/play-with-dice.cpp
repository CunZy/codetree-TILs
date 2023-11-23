#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[7] = {};
    int b;

    for(int i = 0; i < 10; ++i) {
        cin >> b;
        a[b]++;
    }

    for(int i = 1; i < 7; ++i) {
        cout << i << " - " << a[i] << endl;
    }
    return 0;
}