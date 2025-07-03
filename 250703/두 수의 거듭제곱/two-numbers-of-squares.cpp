#include <iostream>

using namespace std;

int a, b;

void print(int n, int m) {
    int w = 1;
    for(int i = 0; i < m; ++i) {
        w *= n;
    }

    cout << w << endl;
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    print(a, b);
    return 0;
}