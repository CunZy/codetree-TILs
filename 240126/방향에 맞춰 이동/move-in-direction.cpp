#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x = 0, y = 0;
    int n;
    cin >> n;

    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};

    for(int i = 0; i < n; ++i) {
        char dir;
        int dis;

        cin >> dir >> dis;

        if(dir == 'W') {
            for(int j = 0; j < dis; ++j) {
                x += dx[0];
                y += dy[0];
            }
        }
        else if(dir == 'N') {
            for(int j = 0; j < dis; ++j) {
                x += dx[1];
                y += dy[1];
            }
        }
        else if(dir == 'E') {
            for(int j = 0; j < dis; ++j) {
                x += dx[2];
                y += dy[2];
            }
        }
        else if(dir == 'S') {
            for(int j = 0; j < dis; ++j) {
                x += dx[3];
                y += dy[3];
            }
        }
    }

    cout << x << " " << y << endl;
    return 0;
}