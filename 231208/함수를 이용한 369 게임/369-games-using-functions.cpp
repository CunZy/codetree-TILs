#include <iostream>
#include <string>
using namespace std;

bool IsN(int n) {
    string a = to_string(n);

    for(int i = 0; i < a.length(); ++i) {
        if(a[i] == '9') {
            return true;
        }
    }

    return false;
}

bool IsS(int n) {
    int t = n;
    while(true) {
        if((t % 10) == 6) {
            return true;
        }
        else {
            if(t > 9) {
                t = t / 10;
            }
            else {
                return false;
            }
        }
    }
}

bool IsT(int n) {
    int t = n;
    while(true) {
        if((t % 10) == 3) {
            return true;
        }
        else {
            if(t > 9) {
                t = t / 10;
            }
            else {
                return false;
            }
        }
    }
}

bool IsTSNB(int n) {
    return n % 3 == 0 || IsT(n) || IsS(n) || IsN(n);
}

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b;
    cin >> a >> b;

    int q = 0;

    for(int i = a; i <= b; ++i) {
        if(IsTSNB(i)) {
            ++q;
        }
    }

    cout << q;
    return 0;
}