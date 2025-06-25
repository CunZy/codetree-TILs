#include <iostream>

using namespace std;

int N;


void print() {
    int a = 1;
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
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
    print();
    return 0;
}