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

    int cnt = 0;
    int len = 0;

    for(int i = 0; i < n; ++i) {
        len += a[i].length();

        if(a[i][0] == 'a') {
            ++cnt;
        }
    }

    cout << len << " " << cnt;
    return 0;
}