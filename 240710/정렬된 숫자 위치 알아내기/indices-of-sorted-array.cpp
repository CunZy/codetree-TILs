#include <iostream>
#include <algorithm>
using namespace std;

class Sigma {
    public:
        int n;
        int o;

        Sigma() {}
        Sigma(int a, int b) {
            n = a;
            o = b;
        }
};

bool order(Sigma a, Sigma b) {
    if(a.n == b.n) {
        return a.o < b.o;
    }
    return a.n < b.n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    Sigma a1[1000];
    Sigma a2[1000];

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int a;
        cin >> a;

        a1[i] = Sigma(a, i + 1);
        a2[i] = Sigma(a, i + 1);
    }

    sort(a2, a2 + n, order);

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(a2[j].n == a1[i].n && a2[j].o == a1[i].o) {
                cout << j + 1 << " ";
                break;
            }
        }
    }
    return 0;
}