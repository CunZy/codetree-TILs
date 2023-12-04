#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    string a;
    cin >> a;

    int sum = 0;

    for(int i = 0; i < a.length(); ++i) {
        if(a[i] >= '0' && a[i] <= '9') {
            sum += (a[i] - '0');
        }
    }

    cout << sum;
    return 0;
}