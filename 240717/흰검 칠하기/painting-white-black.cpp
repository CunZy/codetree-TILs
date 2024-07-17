#include <iostream>
using namespace std;

int state[100000];
int numberA[100000];
int numberB[100000];

int main() {
    // 여기에 코드를 작성해주세요.
    int h = 50000;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x;
        char y;
        cin >> x >> y;
        if(y == 'L') {
            for(int j = 0; j < x; ++j) {
                state[h] = 1;
                numberA[h] += 1;
                if(j != x - 1) {
                    h--;
                }
            }
        }
        else if(y == 'R') {
            for(int j = 0; j < x; ++j) {
                state[h] = 2;
                numberB[h] += 1;
                if(j != x - 1) {
                    h++;
                }
            }
        }
    }

    // for(int i = 0; i < 100000; ++i) {
    //     if(state[i] != 0) {
    //         cout << numberA[i] << " ";
    //     }
    // }
    // cout << endl;

    for(int i = 0; i < 100000; ++i) {
        if(numberA[i] >= 2 && numberB[i] >= 2) {
            state[i] = 3;
        }
    }


    int w = 0, b = 0, g = 0;

    for(int i = 0; i < 100000; ++i) {
        if(state[i] == 1) {
            ++w;
        }
        else if(state[i] == 2) {
            ++b;
        }
        else if(state[i] == 3) {
            ++g;
        }
    }

    cout << w << " " << b << " " << g << endl;
    return 0;
}