#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int a[100];
    int c = 0;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i] == 2) {
            ++c;
        }

        if(c == 3) {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}