#include <iostream>
using namespace std;

class Tile {
    public:
        int n;
        int color;

        Tile(int a = 0, int b = 0) {
            n = a;
            color = b;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.

    Tile tile[200] = {};

    for(int i = 0; i < 200; ++i) {
        tile[i] = Tile();
    }

    int n;
    cin >> n;

    int here = 100;

    for(int i = 0; i < n; ++i) {
        int x;
        char y;

        cin >> x >> y;

        if(y == 'L') {
            for(int j = 0; j < x; ++j) {
                tile[here].n += 1;
                if(tile[here].n >= 4) {
                    tile[here].color = 3;
                }
                else {
                    tile[here].color = 1;
                }

                if(j != x - 1) {
                    here--;
                }
            }
        }
        else if(y == 'R') {
            for(int j = 0; j < x; ++j) {
                tile[here].n += 1;
                if(tile[here].n >= 4) {
                    tile[here].color = 3;
                }
                else {
                    tile[here].color = 2;
                }
                if(j != x - 1) {                
                    ++here;
                }
            }
        }

        
    }

    int w = 0, b = 0, g = 0;

    for(int i = 0; i < 200; ++i) {
        if(tile[i].color == 1) {
            ++w;
        }
        else if(tile[i].color == 2) {
            ++b;
        }
        else if(tile[i].color == 3) {
            ++g;
        }
    }

    // for(int i = 0; i < 200; ++i) {
    //     if(tile[i].n > 0) {
    //         cout << tile[i].color << " ";
    //     }
    // }
    // cout << endl;

    // for(int i = 0; i < 200; ++i) {
    //     if(tile[i].n > 0) {
    //         cout << tile[i].n << " ";
    //     }
    // }
    // cout << endl;

    cout << w << " " << b << " " << g << endl;

    return 0;
}