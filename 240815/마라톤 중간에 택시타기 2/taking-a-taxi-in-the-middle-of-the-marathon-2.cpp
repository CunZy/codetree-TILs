#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int x[100] = {};
    int y[100] = {};

    for(int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i];
    }

    int distance = 0;

    // distance = abs(x[1] - x[0]) + abs(y[1] - y[0]);

    // distance = distance + abs(x[n - 1] - x[n - 2]) + abs(y[n - 1] - y[n - 2]);


    int min = INT_MAX;

    for(int i = 1; i < n - 1; ++i) {
        int sx, sy;
        int sum = 0;
        for(int j = 1; j < n; ++j) {
            if(i == j) {
                sx = x[j - 1];
                sy = y[j - 1];
            }
            else if(i + 1 == j) {
                sum = sum + abs(x[j] - x[sx]) + abs(y[j] - y[sy]);
            }
            else {
                sum = sum + abs(x[j] - x[j - 1]) + abs(y[j] - y[j - 1]);
            }
        }
        if(min > sum) {
            min = sum;
        }

    }

    cout << min << endl;
    return 0;
}