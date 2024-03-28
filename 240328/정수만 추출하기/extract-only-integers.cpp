#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    cin >> a >> b;

    for(int i = 0; i < a.length(); ++i) {
        if(!isdigit(a[i])) {
            a.erase(i);
            break;
        }
    }

    for(int i = 0; i < b.length(); ++i) {
        if(!isdigit(b[i])) {
            b.erase(i);
            break;
        }
    }

    int c = stoi(a);
    int d = stoi(b);

    cout << c + d << endl;
    return 0; 
}