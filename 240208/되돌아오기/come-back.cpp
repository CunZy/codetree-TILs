#include <iostream>
using namespace std;

int Dir(char d) {
    if(d == 'W') {
        return 2;
    }
    else if(d == 'S') {
        return 3;
    }
    else if(d == 'N') {
        return 1;
    }
    else if(d == 'E') {
        return 0;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int x = 0, y = 0;

    int n;
    cin >> n;

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    int num = 0;

    for(int i = 0; i < n; ++i) {
        char dir;
        int way;

        cin >> dir >> way;

        int d = Dir(dir);

        for(int j = 0; j < way; ++j) {
            x += dx[d];
            y += dy[d];

            ++num;
            if(x == 0 && y == 0) {
                cout << num << endl;

                return 0;
            }
        }
    }
    return 0;
}