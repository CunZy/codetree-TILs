#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char a[6] = {'L', 'E', 'B', 'R', 'O', 'S'};

    char b;
    cin >> b;

    int t = -1;
    for(int i = 0; i < 6; ++i) {
        if(a[i] == b) {
            t = i;
        }
    }

    if(t == -1) {
        cout << "None";
    }
    else {
        cout << t;
    }
    return 0;
}