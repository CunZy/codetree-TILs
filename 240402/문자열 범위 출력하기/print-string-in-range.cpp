#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    getline(cin, a);

    for(int i = 2; i < 10; ++i) {
        cout << a[i];
    }
    return 0;
}