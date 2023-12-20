#include <iostream>
#include <algorithm>
using namespace std;

class Dot {
    public:
    int x, y, n;

    Dot() {}
    Dot(int x, int y, int n) {
        this->x = x;
        this->y = y;
        this->n = n;
    }
};

bool Sort(Dot &a, Dot &b) {
    int q = a.x;
    int w = a.y;

    int e = b.x;
    int r = b.y;

    if(q < 0) {
        q *= -1;
    }
    if(w < 0) {
        w *= -1;
    }
    if(e < 0) {
        e *= -1;
    }
    if(r < 0) {
        r *= -1;
    }

    int z = q + w;
    int x = e + r;

    if(z != x) {
        return z < x;
    }
    return a.n < b.n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    Dot dot[1000];

    for(int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;

        dot[i] = Dot(x, y, i + 1);
    }

    sort(dot, dot + n, Sort);

    for(int i = 0; i < n; ++i) {
        cout << dot[i].n << endl;
    }
    return 0;
}