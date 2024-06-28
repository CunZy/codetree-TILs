#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x = 0; int y = 0;
    int n = 0; cin >> n;
    char c_dir; int dist;

    int dx[4] = {0,1,-1,0};
    int dy[4] = {1,0,0,-1};
    for (int i = 0; i < n; i++){
        cin >> c_dir >> dist;
        if (c_dir == 'N'){ //north 위
            y += dist*dy[0];
        }else if (c_dir == 'E'){ //east 동
            x += dist*dx[1];
        }else if (c_dir == 'S'){ //south 남
            y += dist*dy[3];
        }else if (c_dir == 'W'){// west 서
            x += dist*dx[2];
        }
    }

    cout << x << ' ' << y;
    return 0;
}