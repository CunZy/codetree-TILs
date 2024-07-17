#include <iostream>
using namespace std;

class Tile {
    public:
        int n1;
        int n2;
        int color;

        Tile(int a = 0, int b = 0, int c = 0) {
            n1 = a;
            n2 = b;
            color = c;
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
                tile[here].n1 += 1;
                if(tile[here].n1 > 2 && tile[here].n2 > 2) {
                    continue;
                }
                else if(tile[here].n1 == 2 && tile[here].n2 == 2) {
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
                tile[here].n2 += 1;
                if(tile[here].n1 > 2 && tile[here].n2 > 2) {
                    continue;
                }
                else if(tile[here].n1 == 2 && tile[here].n2 == 2) {
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

    cout << w << " " << b << " " << g << endl;

    return 0;
}