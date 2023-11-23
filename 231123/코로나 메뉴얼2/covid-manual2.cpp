#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int on[3];
    char wmd[3];

    int a[4] = {};

    for(int i = 0; i < 3; ++i) {
        cin >> wmd[i] >> on[i]; 

        if(wmd[i] == 'Y') {
            if(on[i] >= 37) {
                a[0]++;
            }
            else {
                a[2]++;
            }
        }
        else {
            if(on[i] >= 37) {
                a[1]++;
            }
            else {
                a[3]++;
            }
        }
    }

    for(int i = 0; i < 4; ++i) {
        cout << a[i] << " ";
    }
    if(a[0] >= 2) {
        cout << "E";
    }
    return 0;
}