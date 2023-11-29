#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    char c;
    getline(cin, a);
    cin >> c;

    int cnt = 0;
    for(int i = 0; i < a.length(); ++i) {
        if(a[i] == c) {
            ++cnt;
        }
    }

    cout << cnt;
    return 0;
}