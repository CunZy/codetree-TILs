#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[100];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int min = INT_MAX;
    int c = 1;

    for(int i = 0; i < n; ++i) {
        if(min > a[i]) {
            min = a[i];
            c = 1;
        }
        else if(min == a[i]) {
            ++c;
        }
    }

    cout << min << " " << c;
    return 0;
}