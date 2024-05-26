#include <iostream>
using namespace std;

void Down(int n) {
    if(n == 0) {
        return;
    }
    Down(n - 1);
    cout << n << " ";
}

void Up(int n) {
    if(n == 0) {
        return;
    }
    cout << n << " ";
    Up(n - 1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    Down(n);
    cout << endl;
    Up(n);
    return 0;
}