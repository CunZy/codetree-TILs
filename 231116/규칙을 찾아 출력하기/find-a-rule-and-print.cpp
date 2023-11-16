#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        if(i == 0){
            for(int j = 0; j < n; ++j) {
                cout << "* ";
            }
            cout << endl;
        }
        else {
            for(int j = 0; j < i; ++j) {
                cout << "* ";
            }
            for(int j = 0; j < n - i - 1; ++j) {
                cout << "  ";
            }
            cout << "* " << endl;
        }

    }
    return 0;
}