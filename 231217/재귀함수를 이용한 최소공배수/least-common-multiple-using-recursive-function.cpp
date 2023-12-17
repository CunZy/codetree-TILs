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

    int c = 1;

    while(true) {
        bool t = false;

        for(int i = 0; i < n; ++i) {
            if(c % a[i] != 0) {
                ++c;
                break;     
           }

           if(i == n - 1) {
            t = true;
           }
        }

        if(t) {
            break;
        }
    }

    cout << c;
    return 0;
}