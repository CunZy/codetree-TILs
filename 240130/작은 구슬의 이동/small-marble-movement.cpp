#include <iostream>
using namespace std;

int n;
int t;

bool IsIn(int x, int y) {
    return x > 0 && x <= n && y > 0 && y <= n;
}

int GetDir(char d) {
    if(d == 'R') {
        return 0;
    }
    else if(d == 'L') {
        return 3;
    }
    else if(d == 'U') {
        return 2;
    }
    else if(d == 'D') {
        return 1;
    }
}

int r, c;
char d;

int main() {
    // 여기에 코드를 작성해주세요.
    int dx[4] = {0, 1, -1, 0};
    int dy[4] = {1, 0, 0, -1};

    cin >> n >> t;

    cin >> r >> c >> d;

    int dir = GetDir(d);

    int x = r, y = c;


    for(int i = 0; i < t; ++i) {
        if(IsIn(x + dx[dir], y + dy[dir])) {
            x += dx[dir];
            y += dy[dir];
        }
        else {
            dir = 3 - dir;
        }
    }

    cout << x << " " << y << endl;
    return 0;
}