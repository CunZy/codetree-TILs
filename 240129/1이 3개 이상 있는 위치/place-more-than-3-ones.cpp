#include <iostream>
using namespace std;

int a[100][100];
int n;

bool IsIn(int x, int y) {
    return x < n && x >= 0 && y < n && y >= 0;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    int total = 0;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            int cnt = 0;
            for(int k = 0; k < 4; ++k) {
                if(IsIn(i + dx[k], j + dy[k]) && a[i + dx[k]][j + dy[k]] == 1) {
                    ++cnt;
                }
            }
            if(cnt >= 3) {
                ++total;
                cnt = 0;
            }
        }
    }

    cout << total;
    
    return 0;
}