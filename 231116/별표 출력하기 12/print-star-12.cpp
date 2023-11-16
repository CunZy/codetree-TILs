#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        if(i == 0) {
            for(int j = 0; j < n; ++j) {
                cout << "* ";
            }
            cout << endl;
        }
        else {
            for(int j = 0; j < n; ++j) {
                if(j < i) {
                    cout << "  ";
                }
                else if(j % 2 == 1) {
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}