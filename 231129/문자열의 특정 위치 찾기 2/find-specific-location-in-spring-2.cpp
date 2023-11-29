#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a[5] = {"apple", "banana", "grape", "blueberry", "orange"};

    char b;
    cin >> b;

    int cnt = 0;

    for(int i = 0; i < 5; ++i) {
        for(int j = 2; j < 4; ++j) {
            if(b == a[i][j]) {
                ++cnt;
                cout << a[i] << endl;
                break;
            }
        }
    }

    cout << cnt;

    return 0;
}