#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[10];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int min = a[0];

    for(int i = 0; i < n - 1; ++i) {
        if(min > a[i + 1] - a[i]) {
            min = a[i + 1] - a[i];
        }
    } 

    cout << min << endl;

    return 0;
}