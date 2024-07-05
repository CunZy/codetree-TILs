#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    string t;
    cin >> n >> k >> t;

    string w[100] = {};
    int count = 0;
    for(int i = 0; i < n; ++i) {
        string a;
        cin >> a;
        if(a.length() > 100) {
            break;
        }
        bool e = true;
        for(int j = 0; j < t.length(); ++j) {
            if(a[j] != t[j]) {
                e = false;
            }
        }

        if(e) {
            w[i] = a;
            ++count;
        }
    }

    sort(w, w + count);

    cout << w[k - 1] << endl;
    return 0;
}