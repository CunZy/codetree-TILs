#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char c[5][3];

    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 3; ++j) {
            cin >> c[i][j];
        }
    }

    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 3; ++j) {
            c[i][j] -= 32;
        }
    }

    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}