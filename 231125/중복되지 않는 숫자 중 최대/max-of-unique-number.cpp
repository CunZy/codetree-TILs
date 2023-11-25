#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[1000];
    int b[1001] = {};
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        b[a[i]]++;
    }

    bool g = true;

    for(int i = n; i >= 0; --i) {
        if(b[i] == 0) {
            continue;
        }
        else if(b[i] == 1) {
            cout << i << endl;
            g = false;
            break;
        }
    }

    if(g) {
        cout << -1 << endl;
    }
    return 0;
}