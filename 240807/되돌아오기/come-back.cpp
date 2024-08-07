#include <iostream>
using namespace std;

int direction(char d) {
    if(d == 'W') {
        return 3;
    }
    else if(d == 'S') {
        return 2;
    }
    else if(d == 'N') {
        return 0;
    }
    return 1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    int x[1001] = {};
    int y[1001] = {};

    int time = 1;

    for(int i = 0; i < n; ++i) {
        char d;
        int t;

        cin >> d >> t;

        int dir = direction(d);

        for(int j = 0; j < t; ++j) {
            x[time] = x[time - 1] + dx[dir];
            y[time] = y[time - 1] + dy[dir];
            // cout << x[time] << " " << y[time] << endl;
            time++;
        }
    }

    bool IsTrue = true;

    for(int i = 1; i < time; ++i) {
        if(x[i] == 0 && y[i] == 0) {
            IsTrue = false;
            cout << i << endl;
            break;
        }
    }

    if(IsTrue) {
        cout << -1 << endl;
    }
    return 0;
}