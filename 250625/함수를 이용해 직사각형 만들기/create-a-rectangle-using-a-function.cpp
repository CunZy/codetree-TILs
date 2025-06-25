#include <iostream>

using namespace std;

int n, m;

void print(int a, int b) {
    for(int i = 0; i < a; ++i) {
        for(int j = 0; j < b; ++j) {
            cout << "1";
        }
        cout << endl;
    }
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    print(n, m);
    return 0;
}