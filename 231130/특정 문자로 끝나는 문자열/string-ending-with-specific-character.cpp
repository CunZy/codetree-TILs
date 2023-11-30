#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a[10];
    char b;
    
    for(int i = 0; i < 10; ++i) {
        cin >> a[i];
    }
    cin >> b;

    bool w = true;

    for(int i = 0; i < 10; ++i) {
        if(b == a[i][a[i].length() - 1]) {
            w = false;
            cout << a[i] << endl;
        }
    }

    if(w) {
        cout << "None";
    }

    return 0;
}