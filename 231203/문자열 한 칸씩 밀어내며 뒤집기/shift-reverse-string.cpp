#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    string a;
    cin >> a;

    int q;
    cin >> q;

    for(int i = 0; i < q; ++i) {
        int t;
        cin >> t;

        
        if(t == 1) {
            a = a.substr(1) + a.substr(0, 1);
            cout << a << endl;
        }
        else if(t == 2) {
            a = a.substr(a.length() - 1, 1) + a.substr(0, a.length() - 1);
            cout << a << endl;
        }
        else if(t == 3) {
            string e = a;

            for(int j = 0; j < e.length(); ++j) {
                a[j] = e[e.length() - j - 1];
            }

            cout << a;
        }
    }
    return 0;
}