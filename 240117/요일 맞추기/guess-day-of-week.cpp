#include <iostream>
using namespace std;

int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

bool isTrue(int a, int b, int c, int d) {
    if(a < c) {
        return true;
    }
    else if(a == c) {
        if(b < d) {
            return true;
        }
        else if(b == d) {
            return true;
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int m1, d1;
    int m2, d2;

    cin >> m1 >> d1 >> m2 >> d2;

    int day = 0;

    if(isTrue(m1, d1, m2, d2)){
        while(true) {
            if(m1 == m2 && d1 == d2) {
                break;
            }

            day++;
            d1++;

            int t = month[m1 - 1]; 
            if(t + 1 == d1) {
                m1++;
                d1 = 1;
            }
        }
        day %= 7;
        cout << days[day];
    }
    else {
        while(true) {
            if(m1 == m2 && d1 == d2) {
                break;
            }

            day++;
            d2++;

            int t = month[m2 - 1]; 
            if(t + 1 == d2) {
                m2++;
                d2 = 1;
            }
        }
        day %= 7;
        cout << days[7 - day];
    }


    return 0;
}