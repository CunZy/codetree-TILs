#include <iostream>

using namespace std;

int n, m;
int A[100];

int total;

void change() {
    while(m != 1) {
        if(m % 2 == 0) {
            total += A[m - 1];
            m /= 2;
        }
        else {
            total += A[m - 1];
            m -= 1;
        }
    }
    total += A[0];
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    change();

    cout << total;
    return 0;
}