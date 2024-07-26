#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k, p, T;
    cin >> n >> k >> p >> T;
    int t[250] = {};
    int x[250] = {};
    int y[250] = {};
    int person[101] = {};
    int torder[250] = {};
    int d[101] = {};
    d[p] = 1;

    for(int i = 0; i < T; ++i) {
        cin >> t[i] >> x[i] >> y[i];
        torder[i] = t[i];
    }

    sort(torder, torder + T);

    int order[250] = {};
    for(int i = 0; i < T; ++i) {
        for(int j = 0; j < T; ++j) {
            if(t[j] == torder[i]) {
                order[i] = j;
            }
        }
    }

    // for(int i = 0; i < T; ++i) {
    //     cout << t[order[i]] << endl;
    // }

    for(int i = 0; i < T; ++i) {
        if(d[x[order[i]]] == 1 || d[y[order[i]]] == 1) {
            if(person[x[order[i]]] < k && person[y[order[i]]] < k) {
                if(d[x[order[i]]] == 1) {
                    person[x[order[i]]]++;
                }
                if(d[y[order[i]]] == 1) {
                    person[y[order[i]]]++;
                }
                d[x[order[i]]] = 1;
                d[y[order[i]]] = 1;
            }
        }

        // for(int j = 1; j <= n; ++j) {
        //     cout << d[j] << " ";
        // }
        // cout << endl;
    }

    for(int i = 1; i <= n; ++i) {
        cout << d[i];
    }
    return 0;
}