#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<string> a;

bool cmp(string q, string b) {
    return q + b >= b + q;
}

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        string t;
        cin >> t;
        a.push_back(t);
    }

    sort(a.begin(), a.end(), cmp);

    for(int i = 0; i < n; ++i) {
        cout << a[i];
    }
}