#include <iostream>

using namespace std;

int n, m;

void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    swap(n, m);
    cout << n << " " << m << endl;
    return 0;
}