#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    int sum = 0;
    if(a > b) {
        int t = b;
        b = a;
        a = t;
    }
    
    for(int i = a; i <= b; ++i) {
        if(i % 5 == 0) {
            sum += i;
        }
    }

    cout << sum << endl;
    return 0;
}