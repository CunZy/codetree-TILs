#include <iostream>

using namespace std;

int N;

int a = 1;

void print(int n) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << a << " ";
            a++;
            if(a >= 10) {
                a = 1;
            }
        }
        cout << endl;
    }
}

int main() {
    cin >> N;

    // Please write your code here.
    print(N);
    return 0;
}