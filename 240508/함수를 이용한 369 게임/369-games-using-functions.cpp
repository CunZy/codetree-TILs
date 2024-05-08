#include <iostream>
using namespace std;

bool IsThree(int i) {
    do {
        if(i % 10 == 3) {
            return true;
        }
        else {
            i /= 10;
        }
    } while(i > 0);
    return false;
}

bool IsSix(int i) {
    do {
        if(i % 10 == 6) {
            return true;
        }
        else {
            i /= 10;
        }
    } while(i > 0);
    return false;
}

bool IsNine(int i) {
    do {
        if(i % 10 == 9) {
            return true;
        }
        else {
            i /= 10;
        }
    } while(i > 0);
    return false;
}

bool Istdr(int i) {
    return IsThree(i) || IsSix(i) || IsNine(i);
}

bool IsTrue(int i) {
    return i % 3 == 0 || Istdr(i);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    
    int cnt = 0;

    for(int i = a; i <= b; ++i) {
        if(IsTrue(i)) {
            ++cnt;
        }
    }

    cout << cnt << endl;
    return 0;
}