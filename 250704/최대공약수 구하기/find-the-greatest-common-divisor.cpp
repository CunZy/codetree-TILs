#include <iostream>

using namespace std;

int n, m;

void print(int a, int b) {
    int r = 1;

    for(int i = 1; i <= min(a, b); ++i) {
        if(a % i == 0 && b % i == 0) {
            r = i;
        }
    }

    cout << r << endl;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    print(n, m);

    return 0;
}