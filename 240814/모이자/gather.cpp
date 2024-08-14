#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[100] = {};
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int max = INT_MAX;

    for(int i = 0; i < n; ++i) {
        int center = i;
        int order = 0;

        for(int j = 0; j < n; ++j) {
            order += a[j] * abs(center - j);
        }

        if(max > order) {
            max = order;
        }
    }

    cout << max << endl;
    return 0;
}