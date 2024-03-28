#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    char b;
    cin >> a >> b;

    int start = -1;

    if(a.find(b) != string::npos) {
        start = a.find(b);
    }

    if(start == -1) {
        cout << "No" << endl;
    }
    else {
        cout << start << endl;
    }

    return 0;
}