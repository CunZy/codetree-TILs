#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int m;

    cin >> m;

    for(int i = 0; i < m; ++i) {
        cin >> n;
        int w = 0;
        while(n != 1) {
            if(n % 2 == 0) {
                n /= 2;
            }
            else {
                n = n * 3 + 1;
            }
            ++w;
        }

        cout << w << endl;
    }
    return 0;
}