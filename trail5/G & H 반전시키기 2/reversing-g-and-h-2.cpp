#include <iostream>
using namespace std;

int n;
string a, b;
int t[1000];

int main() {
    // Please write your code here.
    cin >> n;

    cin >> a >> b;

    for(int i = 0; i < n; ++i) {
        if(a[i] != b[i]) t[i] = 0;
        else t[i] = 1;
    }

    int cnt = 0;

    for(int i = n - 1; i >= 0; --i) {
        if(t[i] == 0) {
            ++cnt;
            for(int j = 0; j <= i; ++j) {
                t[j] = 1 - t[j];
            }
        }
    }

    cout << cnt;
    return 0;
}