#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    cin >> a >> b;

    int start = -1;

    for(int i = 0; i < a.length() - b.length() + 1; ++i) {
        bool w = true;
        for(int j = 0; j < b.length(); ++j) {
            if(a[i + j] != b[j]) {
                w = false;
                break;
            }
        }

        if(w == true) {
            start = i;
            break;
        }
    }

    cout << start;
    return 0;
}