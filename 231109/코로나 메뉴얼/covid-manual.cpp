#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char a1, b1, c1;
    int a2, b2, c2;

    int count = 0;

    cin >> a1 >> a2;
    cin >> b1 >> b2;
    cin >> c1 >> c2;

    if(a1 == 'Y') {
        if(a2 >= 37) {
            ++count;
        }
    }

    if(b1 == 'Y') {
        if(b2 >= 37) {
            ++count;
        }
    }

    if(c1 == 'Y') {
        if(c2 >= 37) {
            ++count;
        }
    }

    if(count >= 2) {
        cout << "E";
    }
    else {
        cout << "N";
    }
    return 0;
}