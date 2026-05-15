#include <iostream>
using namespace std;

int a[100];

int Count(int n) {
    int cnt = 0;
    for(int i = 0; i < n; ++i) {
        if(i == n - 1 && a[i] == 0) return -1;
        if(a[i] == 0) {
            ++cnt;
            if(i == n - 2) {
                a[i] = 1 - a[i];
                a[i + 1] = 1 - a[i + 1];
            }
            else {
                a[i] = 1 - a[i];
                a[i + 1] = 1 - a[i + 1];
                a[i + 2] = 1 - a[i + 2];
            }
        } 
    }

    return cnt;
}

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << Count(n);
}