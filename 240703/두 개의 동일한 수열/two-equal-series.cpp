#include <iostream>
#include <algorithm>
using namespace std;

int n;

bool equal(int *a, int *b) {
    for(int i = 0; i < n; ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}


int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    int a[100] = {};

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int b[100] = {};

    for(int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + n);

    if(equal(a, b)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}