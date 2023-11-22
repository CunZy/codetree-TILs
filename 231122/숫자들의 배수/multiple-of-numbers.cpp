#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[100];

    int n;
    cin >> n;

    int c = 0;

    for(int i = 0; i < 100; ++i) {
        a[i] = n * (i + 1);
        cout << a[i] << " ";
        if(a[i] % 5 == 0) {
            ++c;
            if(c == 2) {
                break;
            }
        }

    }
    return 0;
}