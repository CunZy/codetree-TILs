#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int sum = 0;
    for(int i = 0; i < n; ++i) {
        int t;
        cin >> t;

        if(t % 2 == 1 && t % 3 == 0) {
            sum += t;
        }
    }

    cout << sum << endl;
    return 0;
}