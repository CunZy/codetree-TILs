#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[1000] = {};

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int count = 0;
    int max = 0;

    for(int i = 0; i < n; ++i) {
        if(i == 0 || a[i] == a[i - 1]) {
            count++;
            if(max < count) {
                max = count;
            }
        }
        else if(a[i] != a[i - 1]) {
            count = 1;
        }
    }

    cout << max << endl;
    return 0;
}