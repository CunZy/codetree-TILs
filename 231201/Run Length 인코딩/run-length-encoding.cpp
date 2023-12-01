#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;

    cin >> a;

    char b = a[0];
    int c = 1;

    for(int i = 0; i < a.length(); ++i) {
        if(b != a[i]) {
            ++c;
            b = a[i];
        }
    }

    cout << c * 2 << endl;

    b = a[0];
    c = 0;
    for(int i = 0; i < a.length(); ++i) {
        if(b == a[i]) {
            ++c;
        }
        
        if(i == a.length() - 1) {
            if(b == a[i]) {
                cout << b << c;
            }
            else {
                cout << b << c;
                cout << a[i] << 1;
            }
        }
        else if(b != a[i]) {
            cout << b << c;
            b = a[i];
            c = 1;
        }
    }
    return 0;
}