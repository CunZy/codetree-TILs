#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> a;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
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