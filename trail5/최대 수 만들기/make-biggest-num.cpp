#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
string t[50000];

bool cmp(string a, string b) {
    string t1 = a + b;
    string t2 = b + a;

    return t1 > t2;
}

int main() {
    // Please write your code here.
    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> t[i];
    }

    sort(t, t + n, cmp);

    for(int i = 0; i < n; ++i) {
        cout << t[i];
    }
    return 0;
}