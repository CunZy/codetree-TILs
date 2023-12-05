#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    string a = to_string(n);

    int c = 0;
    

    for(int i = 0; i < a.length(); ++i) {
        string b;
        b += a[i];
        c += stoi(b);
    }

    cout << c;
    return 0;
}