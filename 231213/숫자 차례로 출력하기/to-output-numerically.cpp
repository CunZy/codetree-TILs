#include <iostream>
using namespace std;

int cnt;

void Grow(int n) {
    if(n == 0) {
        return;
    }
    Grow(n - 1);
    cout << n << " ";
}

void Dep(int n) {
    if(n == 0) {
        return;
    }

    cout << n << " ";
    Dep(n - 1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    Grow(n);
    cout << endl;
    Dep(n);
    return 0;
}