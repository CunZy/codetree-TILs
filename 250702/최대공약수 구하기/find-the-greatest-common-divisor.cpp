#include <iostream>

using namespace std;

int n, m;

void print(int a, int b) {
    int t;
    if(a > b) {
        t = a % b;
        if(t == 0) {
            cout << b;
        }
        else {
            print(b, t);
        }
    }
    else {
        t = b % a;
        if(t == 0) {
            cout << a;
        }
        else {
            print(a, t);
        }
    }

}

int main() {
    cin >> n >> m;

    // Please write your code here.
    print(n, m);
    return 0;
}