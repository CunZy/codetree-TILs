#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int s, e;
    cin >> s >> e;

    int c = 0;

    for(int i = s; i <= e; ++i) {
        int w = 0;
        for(int j = 1; j <= i; ++j) {
            if(i % j == 0) {
                ++w;
            }
        }

        if(w == 3) {
            ++c;
        }
    }

    cout << c << endl;
    return 0;
}