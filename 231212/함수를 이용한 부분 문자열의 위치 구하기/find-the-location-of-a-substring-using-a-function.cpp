#include <iostream>
using namespace std;

string a;

int Witch(string &b) {

    bool t = false;
    int e = 0;
    for(int i = 0; i < a.length(); ++i) {
        if(t == false) {
            for(int j = 0; j < b.length(); ++j) {
                if(a[i + j] != b[j]) {
                    break;
                }
                if(j == b.length() - 1) {
                    t = true;
                    e = i;
                }
            }
        }
    }
    if(t) {
        return e;
    }   
    else {
        return -1;
    } 
}

int main() {
    // 여기에 코드를 작성해주세요.
    string b;
    cin >> a >> b;

    cout << Witch(b);
    return 0;
}