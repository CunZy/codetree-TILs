#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a = 0, b = 0, c = 0;
    for(int i = 1; i <= n; ++i) {
        if(i % 12 == 0) {
            c++;
        }
        else if(i % 3 == 0) {
            ++b;
        }
        else if(i % 2 == 0) {
            ++a;
        }
    }

    cout << a << " " << b << " " << c;
    return 0;
}