#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    cin >> a >> b;
    


    for(int i = 0; i < a.length(); ++i) {
        if(a[i] < '0' || a[i] > '9') {
            if(i == 0) {
                a = a.substr(1);
                --i;
            }
            else if(i == a.length() - 1) {
                a = a.substr(0, a.length() - 1);
            }
            else {
                a = a.substr(0, i) + a.substr(i + 1);
                --i;
            }
        }
    }


   for(int i = 0; i < b.length(); ++i) {
        if(b[i] < '0' || b[i] > '9') {
            if(i == 0) {
                b = b.substr(1);
                --i;
            }
            else if(i == b.length() - 1) {
                b = b.substr(0, b.length() - 1);
            }
            else {
                b = b.substr(0, i) + b.substr(i + 1);
                --i;
            }
        }
    }
    

    cout << stoi(a) + stoi(b) << endl;
    
    return 0;
}