#include <iostream>
using namespace std;

int add(int n){
    int total = 0;
    for(int i = 1; i <= n; ++i) {
        total += i;
    }
    return total / 10;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    cout << add(n);
    return 0;
}