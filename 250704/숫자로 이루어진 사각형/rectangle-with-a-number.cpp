#include <iostream>

using namespace std;

int N;

void print(int a) {
    int t = 1;
    for(int i = 0; i < a; ++i) {
        for(int j = 0; j < a; ++j) {
            cout << t << " ";
            t++;
            if(t >= 10) {
                t = 1;
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