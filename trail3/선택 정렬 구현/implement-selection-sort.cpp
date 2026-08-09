#include <iostream>
using namespace std;

int a[100];

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for(int i = 0; i < n - 1; ++i) {
        int idx = i;
        for(int j = i; j < n; ++j) {
            if(a[idx] > a[j]) idx = j;
        }

        int t = a[idx];
        a[idx] = a[i];
        a[i] = t;
    }

    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    
    return 0;
}