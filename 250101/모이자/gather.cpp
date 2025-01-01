#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;



int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int a[100];

    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int m = INT_MAX;
    for(int i = 0; i < n; ++i) {
        int w = 0;
        for(int j = 0; j < n; ++j) {
            w += abs(i - j) * a[j];
        }

        if(m > w) {
            m = w;
        }
    }

    cout << m << endl;
    return 0;
}