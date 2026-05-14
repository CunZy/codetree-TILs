#include <iostream>
using namespace std;

int t[1000];

int main() {
    // Please write your code here.
    int n;
    string a, b;
    cin >> n >> a >> b;

    for(int i = 0; i < n; ++i) {
        if(a[i] != b[i]) t[i] = 1;
    }

    int answer = 0;

    if(t[0] == 1) answer = 1;

    for(int i = 1; i < n; ++i) {
        if(t[i - 1] == 0 && t[i] == 1) ++answer;
    }

    cout << answer;
    return 0;
}