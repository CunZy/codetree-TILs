#include <iostream>

using namespace std;

int N;

void print1(int n) {
    if(n == 0) {
        return;
    }

    cout << n << " ";
    print1(n - 1);
}

void print2(int n) {
    if(n == 0) 
        return;

    print2(n - 1);
    cout << n << " ";
}

int main() {
    cin >> N;

    // Please write your code here.
    print2(N);
    cout << endl;
    print1(N);
    return 0;
}