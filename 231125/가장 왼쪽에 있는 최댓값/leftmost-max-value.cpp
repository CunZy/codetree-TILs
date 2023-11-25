#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1000];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int r = n;
    while(true) {
        int max = INT_MIN;
        for(int i = 0; i < r; ++i) {
            if(max < a[i]) {
                max = a[i];
            }
        }

        for(int i = 0; i < r; ++i) {
            if(a[i] == max) {
                r = i;
                break;
            }
        }

        cout << r + 1 << " ";
        if(r == 0) {
            break;
        }
    }
}