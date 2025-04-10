#include <iostream>

using namespace std;

int n, m;

void print(int a, int b) {
    int min;
    if(a > b) {
        min = b;
    }
    else {
        min = a;
    }

    int t = 1;

    for(int i = 1; i <= a; ++i) {
        if(a % i == 0 && b % i == 0) {
            t = i;
        }
    }

    cout << t << endl;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    print(n, m);
    return 0;
}