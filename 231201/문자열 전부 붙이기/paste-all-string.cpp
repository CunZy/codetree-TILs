#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string a[10];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    string s = "";

    for(int i = 0; i < n; ++i) {
        s += a[i];
    }

    cout << s << endl;
    return 0;
}