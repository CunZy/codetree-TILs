#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int sum = 0;
    int c = 0;
    for(int i = 0; i < 10; ++i) {
        int t;
        cin >> t;
        if(t <= 200 && t >= 0) {
            sum += t;
            ++c;
        }
    }

    cout << sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << (double)sum / c << endl;
    return 0;
}