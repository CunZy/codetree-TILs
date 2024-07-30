#include <iostream>
using namespace std;

int w(char a) {
    if(a == 'N') {
        return 0;
    }
    else if(a == 'E') {
        return 1;
    }
    else if(a == 'S') {
        return 2;
    }
    else if(a == 'W') {
        return 3;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int x = 0, y = 0;
    int n;
    cin >> n;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    for(int i = 0; i < n; ++i) {
        char way;
        int dir;

        cin >> way >> dir;

        int r = w(way);
        for(int j = 0; j < dir; ++j) {
            x += dx[r];
            y += dy[r];
        }
    }

    cout << x << " " << y << endl;
    return 0;
}