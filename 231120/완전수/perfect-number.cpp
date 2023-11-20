#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int s, e;
    cin >> s >> e;

    int t = 0;
    for(int i = s; i <= e; ++i) {
        int q = 0;
        for(int j = 1; j < i; ++j) {
            if(i % j == 0) {
                q += j;
            }
        }

        if(q == i) {
            ++t;
        }
    }

    cout << t;
    return 0;
}