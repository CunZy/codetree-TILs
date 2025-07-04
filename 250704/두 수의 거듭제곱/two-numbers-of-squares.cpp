#include <iostream>

using namespace std;

int a, b;

void print(int n, int m) {
    int c = 1;
    for(int i = 1; i <= m; ++i) {
        c *= n;
    }
    cout << c << endl;
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    print(a, b);
    return 0;
}