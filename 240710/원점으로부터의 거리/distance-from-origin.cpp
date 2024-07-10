#include <iostream>
#include <algorithm>
using namespace std;

class Point {
    public:
        int x, y, n;

        Point() {}
        Point(int a, int b, int c) {
            if(a < 0) {
                x = -a;
            }
            else {
                x = a;
            }

            if(b < 0) {
                y = -b;
            }
            else {
                y = b;
            }
            
            n = c;
        }
};

bool order(Point a, Point b) {
    if(a.x + a.y == b.x + b.y) {
        return a.n < b.n;
    }
    return a.x + a.y < b.x + b.y;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    Point point[1000];

    for(int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;

        point[i] = Point(a, b, i + 1);
    }

    sort(point, point + n, order);

    for(int i = 0; i < n; ++i) {
        cout << point[i].n << endl;
    }
    return 0;
}