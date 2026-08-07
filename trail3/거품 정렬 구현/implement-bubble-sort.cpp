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
    
    while(true) {
        bool isTrue = true;
        for(int i = 0; i < n - 1; ++i) {
            if(a[i] > a[i + 1]) {
                int t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
                isTrue = false;
            }
        }
        if(isTrue) break;
    }

    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}