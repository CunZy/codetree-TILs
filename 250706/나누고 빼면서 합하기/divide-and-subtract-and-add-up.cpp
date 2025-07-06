#include <iostream>

using namespace std;

int n, m;
int A[100];

int total;

change() {
    while(m != 1) {
        if(m % 2 == 0) {
            total += A[m];
            m /= 2;
        }
        else {
            total += A[m];
            m -= 1;
        }
    }
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