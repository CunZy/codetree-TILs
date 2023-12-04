#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;

    string order;
    cin >> order;

    for(int i = 0; i < order.length(); ++i) {
        if(order[i] == 'L') {
            a = a.substr(1) + a.substr(0, 1);
        }
        else if(order[i] == 'R') {
            a = a.substr(a.length() - 1) + a.substr(0, a.length() - 1);
        }
    }

    cout << a;
    return 0;
}