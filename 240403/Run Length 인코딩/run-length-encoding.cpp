#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;

    string b = "";

    char c = a[0];

    int count = 0;
    for(int i = 0; i < a.length(); ++i) {
        
        if(i == a.length() - 1) {
            if(c == a[i]) {
                ++count;
            }
            else {
                string r = to_string(count);
                b = b + c + r;
                count = 1;
                c = a[i];
            }
            string d = to_string(count);
            b = b + c + d;
        }
        else {
            if(c == a[i]) {
                ++count;
            }
            else {
                string d = to_string(count);
                b = b + c + d;
                c = a[i];
                count = 1;
            }
        }

    }

    cout << b.length() << endl << b << endl;
    return 0;
}