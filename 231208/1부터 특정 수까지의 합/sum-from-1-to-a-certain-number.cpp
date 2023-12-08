#include <iostream>
#include <string>
using namespace std;

int Add(int n) {
    int sum = 0;
    for(int i = 1; i <= n; ++i) {
        sum += i;
    }

    return sum / 10;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int t = Add(n);

    cout << t;
    return 0;
}