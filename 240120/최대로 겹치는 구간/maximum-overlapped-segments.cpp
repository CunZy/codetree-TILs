#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;
    int a[200] = {};
    for(int i = 0; i < n; ++i) {
        int x1, x2;
        cin >> x1 >> x2;

        for(int i = x1; i < x2; ++i) {
            a[i + 100]++;
        }
    }

    int max = 0;
    for(int i = 0; i < 200; ++i) {
        if(max < a[i]) {
            max = a[i];
        }
    }

    cout << max << endl;


    return 0;
}