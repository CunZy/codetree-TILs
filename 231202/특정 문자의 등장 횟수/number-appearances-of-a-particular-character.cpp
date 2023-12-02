#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;

    int b1 = 0, b2 = 0;
    
    for(int i = 0; i < a.length() - 1; ++i) {
        if(a[i] == 'e' && a[i + 1] == 'e') {
            ++b1;
        }
    }

    for(int i = 0; i < a.length() - 1; ++i) {
        if(a[i] == 'e' && a[i + 1] == 'b') {
            ++b2;
        }
    }

    cout << b1 << " " << b2;
    return 0;
}