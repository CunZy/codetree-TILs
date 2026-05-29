#include <iostream>
#include <string>

#define MAX_N 500000

using namespace std;

// 변수 선언
string T;
string P;

int n, l;

// 2개의 polynomial rolling 해싱을 위한 p, m 값을 정의합니다.
int p[2] = {31, 37};
int m[2] = {int(1e9) + 7, int(1e9) + 9};

// p^i, 값을 m으로 나눈 나머지를 관리합니다.
long long p_pow[2][MAX_N + 1];

// 소문자 알파벳을 수로 변경합니다.
int ToInt(char c) {
    return c - 'a' + 1;
}

int main() {
    // 입력:
    cin >> T >> P;
    n = (int) T.size();
    l = (int) P.size();

    // p_pow 값을 계산합니다.
    for(int k = 0; k < 2; k++) {
        // p_pow[i] = p^i % m
        p_pow[k][0] = 1;
        for(int i = 1; i <= n; i++)
            p_pow[k][i] = (p_pow[k][i - 1] * p[k]) % m[k];
    }

    // pattern에 대한 해싱값인 p_h값을 계산합니다.
    // p_h = (P[0] * p^(l - 1) + P[1] * p^(l - 2) + ... + P[l - 1] * 1) % m
    // 소문자 알파벳은 a부터 z까지 순서대로 1부터 26까지의 수와 대응됩니다.
    long long p_h[2] = {};
    for(int k = 0; k < 2; k++) {
        for(int i = 0; i < l; i++)
            p_h[k] = (p_h[k] + ToInt(P[i]) * p_pow[k][l - 1 - i]) % m[k];
    }
    // text에서 구간 [0, l - 1]에 해당하는 해싱값을 계산합니다.
    long long t_h[2] = {};
    for(int k = 0; k < 2; k++) {
        for(int i = 0; i < l; i++)
            t_h[k] = (t_h[k] + ToInt(T[i]) * p_pow[k][l - 1 - i]) % m[k];
    }

    bool exists = false;
    // 이미 일치한다면 존재하는 것입니다.
    if(p_h[0] == t_h[0] && p_h[1] == t_h[1])
        exists = true;

    int ans = 0;
    // text에서
    // 길이가 l인 부분문자열을 전부 잡아봅니다.
    for(int i = 1; i <= n - l; i++) {
        for(int k = 0; k < 2; k++) {
            // 이전 [i - 1, i + l - 2]에 해당하는 해싱값은 t_h에 있습니다.
            // 이전 값(t_h)은 (T[i - 1] * p^(l - 1) + T[i] * p^(l - 2) + ... + T[i + l - 2] * 1) % m입니다.
            // 이제 t_h * p - T[i - 1] * p^l + T[i + l - 1]를 계산하면
            // 새로 계산을 원하는 해싱값인 (T[i] * p^(l - 1) + T[i + 1] * p(l - 2) + ... + T[i + l - 1] * 1) % m이 됩니다.
            t_h[k] = (t_h[k] * p[k] - ToInt(T[i - 1]) * p_pow[k][l] + ToInt(T[i + l - 1])) % m[k];
            // t_h값을 양수로 변환해줍니다.
            if(t_h[k] < 0)
                t_h[k] += m[k];
        }

        // 값이 일치한다면 존재하는 것입니다.
        if(p_h[0] == t_h[0] && p_h[1] == t_h[1]) {
            exists = true;
            ans = i;
            break;
        }
            
    }

    if(exists)
        cout << ans;
    else
        cout << -1;
    return 0;
}
