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
            int t = i / 100;
            int r = (t % 100) / 10;
            int e = (t % 10); 
            if(t == 3 || t == 6 || t == 9) {
                cout << 0 << " ";
            }
            else if(r == 3 || r == 6 || r == 9) {
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