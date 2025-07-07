#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

bool isTrue(int i) {
    for(int j = 0; j < n2; ++j) {
        if(a[j + i] != b[j]) {
            return false;
        }
    }
    return true;
}

bool isIn() {
    for(int i = 0; i <= n1 - n2; ++i) {
        if(isTrue(i)) {
            return true;
        }
    }
    return false;
}

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    // Please write your code here.

    if(isIn()) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}