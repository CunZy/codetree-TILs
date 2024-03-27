#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;

    int t = 0;

    for(int i = 0; i < a.length(); ++i) {
        t += a[i] - '0';
    }

    cout << t << endl;
    return 0;
}