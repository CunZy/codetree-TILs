#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    int q;

    cin >> s >> q;

    for(int i = 0; i < q; ++i) {
        int num;

        cin >> num;

        if(num == 1) {
            int a, b;
            cin >> a >> b;
            char t = s[a - 1];
            s[a - 1] = s[b - 1];
            s[b - 1] = t;

            cout << s << endl;
        }
        else if(num == 2) {
            char a, b;
            cin >> a >> b;
            for(int j = 0; j < s.length(); ++j) {
                if(s[j] == a) {
                    s[j] = b;
                }
            }
            cout << s << endl;
        }
        
    }
    return 0;
}