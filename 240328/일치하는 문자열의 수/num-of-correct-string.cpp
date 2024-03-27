#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string a;
    cin >> n >> a;
    int c = 0;
    for(int i = 0; i < n; ++i) {
        string b;
        cin >> b;

        if(a == b) {
            c++;
        }
    }

    cout << c << endl;
    return 0;
}