#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    int n;
    cin >> a >> n;

    for(int i = 0; i < n; ++i) {
        if(i == a.length()) {
            break;
        }
        cout << a[a.length() - i - 1];
    }
    return 0;
}