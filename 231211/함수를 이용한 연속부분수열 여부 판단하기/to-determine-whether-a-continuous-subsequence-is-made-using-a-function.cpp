#include <iostream>
using namespace std;

bool IsSame(int a, int b) {
    return a == b;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    cin >> n1 >> n2;

    int a[100], b[100];

    for(int i = 0; i < n1; ++i) {
        cin >> a[i];
    }

    for(int i = 0; i < n2; ++i) {
        cin >> b[i];
    }

    bool t = false;

    for(int i = 0; i < n1 - n2 + 1; ++i) {
        for(int j = 0; j < n2; ++j) {
            if(IsSame(a[i + j], b[j])) {
                if(j == n2 - 1) {
                    t = true;
                }
            }
            else {
                break;
            }
        }
    }

    if(t) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}