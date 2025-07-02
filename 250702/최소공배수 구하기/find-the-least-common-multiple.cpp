#include <iostream>

using namespace std;

int n, m;

void print(int a, int b) {
    int t = max(a, b);

    while(!(t % a == 0 && t % b == 0)) {
        t++;
    }

    cout << t << endl;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    print(n, m);
    return 0;
}