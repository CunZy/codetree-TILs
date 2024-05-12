#include <iostream>
using namespace std;

bool IsNum(int n) {
    for(int i = 2; i < n; ++i) {
        if(n % i == 0) {
            return false;
        }
    }

    int sum = 0;

    while(n >= 10) {
        sum += n % 10;
        n /= 10;
    }

    sum += n;

    if(sum % 2 == 0) {
        return true;
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    int cnt = 0;

    for(int i = a; i <= b; ++i) {
        if(IsNum(i)) {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}