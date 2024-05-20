#include <iostream>
using namespace std;

string a;
string b;

int wh() {
    for(int i = 0; i < a.length() - b.length(); ++i) {
        if(a[i] == b[0]) {
            int count = 0;
            for(int j = 0; j < b.length(); ++j) {
                if(a[i + j] != b[j]) {
                    break;
                }
                else {
                    ++count;
                }
            }
            if(count == b.length()) {
                return i;
            }
        }
    }
    return -1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> a >> b;

    cout << wh();
    return 0;
}