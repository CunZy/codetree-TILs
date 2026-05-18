#include <iostream>
using namespace std;

#define MAX_N 100

int n;
int d[MAX_N + 1][MAX_N + 1];

int main() {
    // Please wrie your code here.
    cin >> n;

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            cin >> d[i][j];
        }
    }

    for(int i = 1; i <= n; ++i) {
        d[i][i] = 1;
    }

    for(int k = 1; k <= n; ++k) {
        for(int i = 1; i <= n; ++i) {
            for(int j = 1; j <= n; ++j) {
                if(d[i][k] == 1 && d[k][j] == 1) d[i][j] = 1;
            }
        }
    }

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}