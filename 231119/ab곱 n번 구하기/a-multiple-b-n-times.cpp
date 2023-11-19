#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int a, b;

    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a >> b;

        int x = 1;

        for(int j = a; j <= b; ++j) {
            x *= j;
        }
        cout << x << endl;
    }
    return 0;
}