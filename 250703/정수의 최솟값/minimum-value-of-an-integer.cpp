#include <iostream>

using namespace std;

int a, b, c;

void print(int q, int w, int e) {
    int min = q;
    if(min > w) {
        min = w;
    }
    if(min > e) {
        min = e;
    }

    cout << min << endl;
}

int main() {
    cin >> a >> b >> c;

    // Please write your code here.
    print(a, b, c);
    return 0;
}