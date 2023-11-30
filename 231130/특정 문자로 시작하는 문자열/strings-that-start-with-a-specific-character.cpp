#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    string a[20];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    char b;
    cin >> b;

    int c = 0;
    double avg = 0;

    for(int i = 0; i < n; ++i) {
        if(a[i][0] == b) {
            ++c;
            avg += a[i].length();
        }
    }

    cout << fixed;
    cout.precision(2);
    cout << c << " " << avg / c << endl;
    return 0;
}