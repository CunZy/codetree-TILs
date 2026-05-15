#include <iostream>
using namespace std;

int a[1000];

int main() {
    int n;
    string q, w;
    cin >> n >> q >> w;

    for(int i = 0; i < n; ++i) {
        if(q[i] != w[i]) a[i] = 0;
        else a[i] = 1;
    }

    int cnt = 0;
    
    // for(int i = 0; i < n; ++i) {
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    for(int i = n - 1; i >= 0; --i) {
        if(a[i] == 0) {
            ++cnt;
            for(int j = 0; j <= i; ++j) {
                a[j] = 1 - a[j];
            }
        }

        // for(int j = 0; j < n; ++j) {
        //     cout << a[j] << " ";
        // }
        // cout << endl;
    }

    cout << cnt;
}