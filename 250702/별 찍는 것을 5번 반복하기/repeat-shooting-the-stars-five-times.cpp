#include <iostream>
using namespace std;

void print() {
    for(int i = 0; i < 10; ++i) {
        cout << "*";
    }
}

int main() {
    // Please write your code here.
    for(int i = 0; i < 5; ++i) {
        print();
        cout << endl;
    }
    return 0;
}