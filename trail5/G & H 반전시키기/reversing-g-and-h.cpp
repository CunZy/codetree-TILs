#include <iostream>
using namespace std;

int q[1000];

int main() {
    int n;
    string a, b;
    cin >> n >> a >> b;

    for(int i = 0; i < n; ++i) {
        if(a[i] != b[i]) q[i] = 0;
        else q[i] = 1;
    }

    int cnt = 0;

    for(int i = 0; i < n; ++i) {
        if(i == 0 && q[i] == 0) ++cnt;

        if(q[i] == 0 && q[i - 1] != 0) ++cnt;
    }

    cout << cnt;
}