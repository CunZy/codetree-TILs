#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    vector<int> a;
    for(int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        a.push_back(t);
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}