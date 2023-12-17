#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a[100];
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a, a + n);

    for(int i = 0; i < n; ++i) {
        cout << a[i] << endl;
    }

    return 0;
}