#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int m[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // solve 1

    int total = 0;

    if(a == c) {
        total = d - b + 1;
    }
    else {
        for(int i = a; i <= c; ++i) {
            if(i == a) {
                total += m[a] - b + 1;
            }
            else if(i == c) {
                total += d;
            }
            else {
                total += m[i];
            }
        }
    }


    cout << total;
    return 0;
}