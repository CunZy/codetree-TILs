#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[100];
    int n;
    cin >> n;
    

    int a1 = INT_MIN, a2 = INT_MIN;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i] > a1) {
            a2 = a1;
            a1 = a[i];
        }
        else if(a[i] > a2) {
            a2 = a[i];
        }
    }

    cout << a1 << " " << a2;
    return 0;
}