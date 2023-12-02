#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    char b;
    cin >> a >> b;

    bool t = true;
    if(a.find(b) != string::npos) {
        cout << a.find(b);
    }
    else {
        cout << "No";
    }
    return 0;
}