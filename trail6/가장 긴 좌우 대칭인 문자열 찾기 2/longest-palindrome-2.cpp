#include <iostream>
using namespace std;

#define MAX_N 200000

int A[MAX_N + 1];
string t;
int ans;

int main() {
    string a;
    cin >> a;
    int n = a.length();

    
    for(int i = 0; i < n; ++i) {
        t += "#";
        t += a[i];
    }
    t += "#";

    n = t.length();

    int r = -1, p = -1;

    for(int i = 0; i < n; ++i) {
        if(r < i) A[i] = 0;
        else {
            int ii = 2 * p - i;
            A[i] = min((r - i), A[ii]);
        }

        while(i - A[i] - 1 >= 0 && i + A[i] + 1 < n && t[i - A[i] - 1] == t[i + A[i] + 1]) A[i]++;

        if(i + A[i] > r) {
            r = i + A[i];
            p = i;
        }
    }

    for(int i = 0; i < n; ++i) {
        ans = max(ans, 2 * A[i] + 1);
    }

    cout << ans / 2;

}