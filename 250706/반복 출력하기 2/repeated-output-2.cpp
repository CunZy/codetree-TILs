#include <iostream>

using namespace std;

int N;

void print(int n) {
    if(n == 0) {
        return;
    }

    print(n - 1);
    cout << "HelloWorld" << endl;
}

int main() {
    cin >> N;

    // Please write your code here.
    print(N);
    return 0;
}