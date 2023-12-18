#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    string T;

    cin >> n >> k >> T;

    string a[100];
    string b[100];

    int c = 0;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i) {
        bool q = true;
        for(int j = 0; j < T.length(); ++j) {
            if(a[i][j] != T[j]) {
                q = false;
                break;
            }
        }

        if(q) {
            b[c] = a[i];
            ++c;
        }
    }

    sort(b, b + c);

    cout << b[k - 1];

    return 0;
}