#include <iostream>
#include <vector>
using namespace std;

#define MAX_N 200000

string q, t;
int n;
int A[MAX_N + 1];
int p = -1, r = -1;

int main() {
    cin >> q;

    for(int i = 0; i < q.length(); ++i) {
        t += "#";
        t += q[i];
    }
    t += "#";

    n = t.length();

    for(int i = 0; i < n; ++i) {
        if(i > r) A[i] = 0;
        else {
            int ii = 2 * p - i;
            A[i] = min(r - i, A[ii]);
        }

        while(i - A[i] - 1 >= 0 && i + A[i] + 1 < n && t[i - A[i] - 1] == t[i + A[i] + 1]) A[i]++;

        if(i + A[i] > r) {
            r = i + A[i];
            p = i;
        }
    }

    int ans = 0;
    for(int i = 0; i < n; ++i) {
        ans = max(ans, A[i]);
    }
    cout << ans;
}