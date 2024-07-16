#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    string n;
    cin >> a >> b;
    cin >> n;

    int t = 0;
    for(int i = 0; i < n.length(); ++i) {
        t = t * a + (n[i] - '0');
    }

    int total[20] = {};
    int here = 0;

    while(true) {
        if(t < b) {
            total[here++] = t;
            break;
        }

        total[here++] = t % b;
        t /= b;
    }

    for(int i = here - 1; i >= 0; --i) {
        cout << total[i];
    }
    return 0;
}