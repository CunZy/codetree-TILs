#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int max = INT_MIN;
    int a[10];
    for(int i = 0; i < 10; ++i) {
        cin >> a[i];
    }

    for(int i = 0; i < 10; ++i) {
        if(a[i] > max) {
            max = a[i];
        }
    }

    
    cout << max;
    return 0;
}