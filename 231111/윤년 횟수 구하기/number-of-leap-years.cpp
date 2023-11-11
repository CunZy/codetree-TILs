#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int a = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        if(i % 400 == 0) {
            ++a;
        }
        else if(i % 100 != 0 && i % 4 == 0) {
            ++a;
        }
    }

    cout << a << endl;
    return 0;
}