#include <iostream>

using namespace std;

int N;

int num = 1;

void print(int n) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << num++ << " ";
            if(num >= 10) {
                num = 1;
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