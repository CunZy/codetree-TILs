#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    string d;
    cin >> d;

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    int dir = 0;

    int x[100000] = {};
    int y[100000] = {};

    int here = 1;

    for(int i = 0; i < d.length(); ++i) {
        if(d[i] == 'F') {
            x[here] = x[here - 1] + dx[dir];
            y[here] = y[here - 1] + dy[dir];
            here++;
        }
        else if (d[i] == 'L') {
            x[here] = x[here - 1];
            y[here] = y[here - 1];
            here++;
            dir = (dir + 3) % 4;
        }
        else if(d[i] == 'R') {
            x[here] = x[here - 1];
            y[here] = y[here - 1];
            here++;
            dir = (dir + 1) % 4;
        }
    }

    bool IsTrue = true;

    for(int i = 1; i < here; ++i) {
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