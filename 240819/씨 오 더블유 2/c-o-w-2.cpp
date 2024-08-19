#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    string a;
    cin >> a;

    int cnt = 0;

    for(int i = 0; i < n; ++i) {
        if(a[i] == 'C') {
            for(int j = i + 1; j < n; ++j) {
                if(a[j] == 'O') {
                    for(int k = j + 1; k < n; ++k) {
                        if(a[k] == 'W') {
                            ++cnt;
                        }
                    }
                }
            }
        }
    }

    cout << cnt << endl;
    return 0;
}