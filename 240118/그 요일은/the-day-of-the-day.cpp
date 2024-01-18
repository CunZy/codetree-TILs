#include <iostream>
using namespace std;

string Day[12] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
int Month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    // 여기에 코드를 작성해주세요.
    int m1, d1, m2, d2;

    cin >> m1 >> d1 >> m2 >> d2;

    int time = 0;

    while(true) {
        if(m1 == m2 && d1 == d2) {
            break;
        }
        time++;
        d1++;

        if(d1 > Month[m1 - 1]) {
            d1 = 1;
            m1++;
        }
    }

    string day;
    cin >> day;

    int start = 0;
    for(int i = 0; i < 7; ++i) {
        if(Day[i] == day) {
            start = i;
            break;
        }
    }

    cout << ((time - start) / 7) + 1 << endl;

    return 0;
}