#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i) {
        if(i % 3 == 0) {
            cout << 0 << " ";
        }
        else {
            int r = i / 10;
            int e = (i % 10); 
            if(r == 3 || r == 6 || r == 9) {
                cout << 0 << " ";
            }
            else if(e == 3 || e == 6 || e == 9) {
                cout << 0 << " ";
            }
            else {
                cout << i << " ";
            }
        }
    }
    return 0;
}