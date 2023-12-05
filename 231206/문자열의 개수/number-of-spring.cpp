#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a[200];

    int cnt = 0;

    for(int i = 0; i < 200; ++i) {
        cin >> a[i];
        if(a[i] == "0") {
            break;
        }

        ++cnt;
    }

    cout << cnt << endl;
    
    for(int i = 0; i < cnt; ++i) {
        if((i + 1) % 2 == 1) {
            cout << a[i] << endl;
        }
    }
    return 0;
}