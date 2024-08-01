#include <iostream>
using namespace std;

bool IsTrue(int x, int y, int n) {
    return (x >= 0 && x < n && y >= 0 && y < n);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a[100][100] = {};

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    int cnt = 0;

    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            int num = 0;
            for(int k = 0; k < 4; ++k) {
                int nx = i + dx[k];
                int ny = j + dy[k];

                if(IsTrue(nx, ny, n) && a[nx][ny] == 1) {
                    num++;
                }
            }

            if(num >= 3) {
                cnt++;
                // cout << i << " " << j << endl;
            }
        }
    }

    cout << cnt << endl;
    return 0; 
}