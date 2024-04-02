#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10];
    for(int i = 0; i < 10; ++i) {
        cin >> a[i];
    }

    int t = INT_MIN;

    for(int i = 0; i < 10; ++i) {
        if(a[i] > t) {
            t = a[i];
        }
    }

    cout << t << endl;
    return 0;
}