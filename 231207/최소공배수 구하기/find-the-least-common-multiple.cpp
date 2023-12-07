#include <iostream>
#include <string>
using namespace std;

void Print(int n, int m) {
    int t;
    if(n > m) {
        t = n;
    }
    else {
        t = m;
    }
    while(true) {
        if(t % m == 0 && t % n == 0) {
            cout << t << endl;
            break;
        } 
        else {
            ++t;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    Print(n, m);
    return 0;
}