#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[19][19] = {};
    for(int i = 0; i < 19; ++i) {
        for(int j = 0; j < 19; ++j) {
            cin >> a[i][j];
        }
    }

    int x[4] = {0, 1, 1, 1};
    int y[4] = {1, 1, 0, -1};

    int dir = 0;

    bool IsTrue = false;

    for(int i = 0; i < 19; ++i) {
        for(int j = 0; j < 19; ++j) {
            dir = 0;
            if(a[i][j] != 0) {

                for(int k = 0; k < 4; ++k) {
                    if(a[i + x[dir]][j + y[dir]] == a[i][j]) {
                        int time = 0;

                        int sx = i;
                        int sy = j;

                        for(int l = 0; l < 4; ++l) {
                            sx += x[dir];
                            sy += y[dir];

                            if(a[sx][sy] != a[i][j]) {
                                break;
                            }
                            else {
                                time++;
                            }
                        }

                        if(time == 4) {
                            cout << a[i][j] << endl;
                            cout << i + x[dir] * 2 + 1 << " " << j + y[dir] * 2 + 1 << endl;
                            IsTrue = true;
                            return 0;
                        }
                    }
                    
                    dir = (dir + 1) % 4;
                }
            }
        }
    }

    if(!IsTrue) {
        cout << 0 << endl;
    }
    return 0;
}