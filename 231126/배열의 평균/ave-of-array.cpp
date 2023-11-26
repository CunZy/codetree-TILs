#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[2][4];

    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 4; ++j) {
            cin >> a[i][j];
        }
    }
    
    cout << fixed;
    cout.precision(1);


    for(int i = 0; i < 2; ++i) {
        double ga = 0;
        for(int j = 0; j < 4; ++j) {
            ga += a[i][j];
        }

        cout << ga / 4 << " ";
    }
    cout << endl;


    for(int j = 0; j < 4; ++j) {
        double se = 0;
        for(int i = 0; i < 2; ++i) {
            se += a[i][j];
        }

        cout << se / 2 << " ";
    }
    cout << endl;


    double total = 0;

    for(int i = 0; i < 2; ++i) { 
        for(int j = 0; j < 4; ++j) {
            total += a[i][j];
        }
    }

    cout << total / 8 << endl;
    
    return 0;
}