#include <iostream>
#include <string>
using namespace std;

#define MAX_N 500000

string T, P;
long long p_pow[2][MAX_N + 1];
int p[2] = {31, 37};
int m[2] = {(int)1e9 + 7, (int)1e9 + 9};

long long p_h[2];
long long t_h[2];

int toInt(char c) {
    return c - 'a' + 1;
}

int main() {
    cin >> T;
    cin >> P;

    int n = T.length();
    int l = P.length();

    for(int k = 0; k < 2; ++k) {
        p_pow[k][0] = 1;
        for(int i = 1; i <= n; ++i) {
            p_pow[k][i] = (p_pow[k][i - 1] * p[k]) % m[k];
        }
    }   

    for(int k = 0; k < 2; ++k) {
        for(int i = 0; i < l; ++i) {
            p_h[k] = (p_h[k] + toInt(P[i]) * p_pow[k][l - i - 1]) % m[k];
        }
    }

    for(int k = 0; k < 2; ++k) {
        for(int i = 0; i < l; ++i) {
            t_h[k] = (t_h[k] + toInt(T[i]) * p_pow[k][l - i - 1]) % m[k];
        }
    }

    if(p_h[0] == t_h[0] && p_h[0] == t_h[0]) {
        cout << 0 << endl;
        return 0;
    }

    int ans = -1;

    for(int i = 1; i <= n - l; ++i) {
        for(int k = 0; k < 2; ++k) {
            t_h[k] = (t_h[k] * p[k] - toInt(T[i - 1]) * p_pow[k][l] + toInt(T[i + l - 1])) % m[k];

            if(t_h[k] < 0) t_h[k] += m[k];
        }

        if(p_h[0] == t_h[0] && p_h[0] == t_h[0]) {
            ans = i;
            break;
        }   
    }
    cout << ans << endl;
}