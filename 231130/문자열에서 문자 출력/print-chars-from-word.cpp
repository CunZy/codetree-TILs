#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;

    for(int i = 0; a[i] != '\0'; ++i) {
        cout << a[i] << endl;
    }
    return 0;
}