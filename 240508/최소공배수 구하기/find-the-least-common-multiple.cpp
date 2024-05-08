#include <iostream>
using namespace std;

void print(int n, int m) {
    int i = n;
    while(i % n != 0 || i % m != 0) {
        ++i;
    }
    cout << i << endl;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    print(n, m);
    return 0;
}