#include <iostream>
using namespace std;

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

    int equals = 1;
    int c = 0;

    for(int i = 0; i < n1; ++i) {
        if(a[i] == b[0]) {
            if(n1 - i >= n2) {
                for(int j = 0; j < n2; ++j) {
                    if(b[j] != a[i + j]) {
                        equals = 0;
                        break;
                    }
                    else {
                        equals = 1;
                    }
                }
            }
            else {
                equals = 0;
                break;
            }

            if(equals == 1) {
                break;
            }
        }
        ++c;
    }

    if(equals == 1 && c < n1) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}