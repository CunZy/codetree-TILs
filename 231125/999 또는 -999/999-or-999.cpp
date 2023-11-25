#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[100];
    cin >> a[0];
    int max = a[0];
    int min = a[0];
    int i = 1;
    while(true) {
        cin >> a[i];
        if(a[i] == 999 || a[i] == -999) {
            break;
        }
        if(a[i] > max) {
            max = a[i];
        }
        if(a[i] < min) {
            min = a[i];
        }
    }

    cout << max << " " << min;
    return 0;
}