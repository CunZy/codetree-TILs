#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int c = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j){
            if(i % 2 == 0) {
                ++c;
                cout << c << " ";
            }
            else {
                c += 2;
                cout << c << " ";
            }
        }
        cout << endl;
    }
    return 0;
}