#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int e1, m1, e2, m2;
    cin >> m1 >> e1;
    cin >> m2 >> e2;

    if(m1 > m2) {
        cout << 'A';
    }
    else if(m1 < m2) {
        cout << 'B';
    }
    else if(e1 > e2) {
        cout << 'A';
    }
    else if(e1 < e2) {
        cout << 'B';
    }
    return 0;
}