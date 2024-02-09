#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;

    cin >> a;
    int n = a.length();
    int x = 0, y = 0;

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    int dir = 0;

    int cnt = 0;

    for(int i = 0; i < n; ++i) {
        
        if(a[i] == 'R') {
            dir = (dir + 1) % 4;
        }
        else if(a[i] == 'L') {
            dir = (dir + 3) % 4;
        }
        else if(a[i] == 'F') {
            x += dx[dir];
            y += dy[dir];
        }

        ++cnt;


        if(x == 0 && y == 0) {
            cout << cnt << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}