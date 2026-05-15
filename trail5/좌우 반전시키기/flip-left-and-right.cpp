#include <iostream>
using namespace std;

int a[100];

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int cnt = 0;
    int answer = -1;

    for(int i = 0; i < n - 1; ++i) {
        if(a[i] == 0) {
            ++cnt;
            for(int j = i; j < i + 3; ++j) {
                if(j >= n) break;

                a[j] = 1 - a[j];
            }
        }
    }

    if(a[n - 1] == 1) answer = cnt;

    cout << answer;

    return 0;
}