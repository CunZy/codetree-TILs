#include <iostream>
using namespace std;

int dirc(char d) {
    if(d == 'U') {
        return 2;
    }
    else if(d == 'D') {
        return 1;
    }
    else if(d == 'R') {
        return 0;
    }
    else if(d == 'L') {
        return 3;
    }
}

bool IsTrue(int r, int c, int n) {
    return (r >= 0 && r <= n && c >= 0 && c < n);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int t;
    cin >> t;

    int r, c;
    char d;
    cin >> r >> c;
    cin >> d;

    r -= 1;
    c -= 1;

    int dx[4] = {0, 1, -1, 0};
    int dy[4] = {1, 0, 0, -1};

    int dir = dirc(d);

    for(int i = 0; i < t; ++i) {
        int nx = r + dx[dir];
        int ny = c + dy[dir];

        if(!IsTrue(nx, ny, n)) {
            dir = 3 - dir;
        }
        else {
            r = r + dx[dir];
            c = c + dy[dir];
        }

        // cout << r + 1 << " " << c + 1 << endl;

    }

    cout << r + 1 << " " << c + 1 << endl;
    return 0;
}