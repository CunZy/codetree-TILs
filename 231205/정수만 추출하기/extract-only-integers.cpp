#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    cin >> a >> b;

    string c = "", d = "";
    
    int e = 0, f = 0;
    for(int i = 0; i < a.length(); ++i) {
        if(a[i] >= '0' && a[i] <= '9') {
            ++e;
        }
        else {
            break;
        }
    }

    for(int i = 0; i < b.length(); ++i) {
        if(b[i] >= '0' && b[i] <= '9') {
            ++f;
        }
        else {
            break;
        }
    }

    c = a.substr(0, e);
    d = b.substr(0, f);

    cout << stoi(c) + stoi(d) << endl;
    return 0;
}