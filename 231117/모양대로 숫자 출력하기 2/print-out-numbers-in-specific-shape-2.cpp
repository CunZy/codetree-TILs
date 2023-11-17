#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int c = 2;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << c << " ";
            c += 2;
            if(c >= 10) {
                c = 2;
            }
        }
        cout << endl;
    }
    return 0;
}