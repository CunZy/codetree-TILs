#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[101] = {};

    int m;
    cin >> m;

    int k;
    cin >> k;

    int ans = -1;
    for(int i = 0; i < m; ++i) {
        int num;
        cin >> num;

        a[num]++;
        if(a[num] >= k) {
            ans = num;
        }
    }

    cout << ans << endl;
    return 0;
}