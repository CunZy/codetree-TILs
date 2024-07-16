#include <iostream>
using namespace std;

int dayw(int a, int b) {
    int m[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int total = 0;

    for(int i = 1; i < a; ++i) {
        total += m[i];
    }

    total += b;

    return total;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, d;
    string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    
    string A;
    cin >> a >> b >> c >> d;
    cin >> A;

    int dayn;
    for(int i = 0; i < 7; ++i) {
        if(days[i] == A) {
            dayn = i;
            break;
        }
    }

    int day = dayw(c, d) - dayw(a, b) + 1;

    cout << (day - dayn) / 7 + 1 << endl;
    
    // int time = 0;
    // int ans = 0;
    // for(int i = 0; i < day; ++i) {
    //     if(dayn == time) {
    //         ++ans;
    //     }
    //     time = (time + 1) % 7;
    // }

    // cout << ans << endl;


    return 0;
}