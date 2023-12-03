#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;
    for(int i = 0; i < a.length(); ++i) {
        if(a[i] == 'e') {
            a.erase(i, 1);
            break;
        }
    }

    cout << a;
    return 0;
}