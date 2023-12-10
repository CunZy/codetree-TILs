#include <iostream>
#include <string>
using namespace std;

bool IsEven(int i) {
    string a = to_string(i);

    int t = 0;

    for(int j = 0; j < a.length(); ++j) {
        t += a[j] - '0';
    }

    return t % 2 == 0;
}

bool IsPrime(int i) {
    if(i == 1) {
        return false;
    }
    for(int j = 2; j < i; ++j) {
        if(i % j == 0) {
            return false;
        }
    }

    return true;
}

bool IsOk(int i) {
    return IsPrime(i) && IsEven(i);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    int c = 0;

    for(int i = a; i <= b; ++i) {
        if(IsOk(i)) {
            ++c;
        }
    }

    cout << c;
    return 0;
}