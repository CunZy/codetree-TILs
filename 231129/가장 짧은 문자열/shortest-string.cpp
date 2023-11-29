#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b, c;
    cin >> a >> b >> c;
    int w = a.length(), e = b.length(), r = c.length();
    int q[3] = {w, e, r};
    int max = q[0];
    int min = q[0];

    for(int i = 0; i < 3; ++i) {
        if(max < q[i]) {
            max = q[i];
        }
        if(min > q[i]) {
            min = q[i];
        }
    }

    cout << max - min;
    return 0;
}