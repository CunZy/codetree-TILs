#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int k;
    cin >> k;

    int a[100] = {};

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int maxs = INT_MIN;

    for(int i = 0; i <= n - k; ++i) {
        int sum = 0;
        for(int j = i; j < i + k; ++j) {
            sum += a[j];
        }  
        maxs = max(sum, maxs);
    }
    
    cout << maxs << endl;
    return 0;
}