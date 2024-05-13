#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[100] = {};
    int b[100] = {};

    int n1, n2;
    cin >> n1 >> n2;

    for(int i = 0; i < n1; ++i) {
        cin >> a[i];
    }

    for(int i = 0; i < n2; ++i) {
        cin >> b[i];
    }

    bool right = false;

    for(int i = 0; i <= n1 - n2; ++i) {
        int cnt = 0;
        for(int j = 0; j < n2; ++j) {
            if(a[i + j] != b[j]) {
                break;
            }
            ++cnt;
        }
        if(cnt == n2) {
            right = true;
            break;
        }
    }

    if(right) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}