#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10] = {};
    int b;

    while(true) {
        cin >> b;
        if(b == 0) {
            break;
        }
        a[b / 10]++;
    }

    for(int i = 1; i < 10; ++i) {
        cout << i << " - " << a[i] << endl;
    }
    return 0;
}