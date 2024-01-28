#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int dir = 0;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int x = 0, y = 0;

    string a;
    cin >> a;

    for(int i = 0; i < a.length(); ++i) {
        if(a[i] == 'L') {
            dir = (dir + 3) % 4;
        }
        else if(a[i] == 'R') {
            dir = (dir + 1) % 4;
        }
        else if(a[i] == 'F') { 
            x += dx[dir];
            y += dy[dir];
        }
    }

    cout << x << " " << y << endl;
    return 0;
}