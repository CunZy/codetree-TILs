#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n;
    int a[100];

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int ma = INT_MAX;

    for(int i = 0; i < n; ++i) {
        int mi = 0;
        for(int j = 0; j < n; ++j) {
            mi += abs(i - j) * a[j];
        }

        if(mi < ma) {
            ma = mi;
        }
    }

    cout << ma << endl;
}