#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    int a[1000000] = {};
    int b[1000000] = {};

    int timeA = 0;
    int timeB = 0;

    int wayA = 0;
    int wayB = 0;

    for(int i = 0; i < n; ++i) {
        int v, t;
        cin >> v >> t;

        for(int j = timeA; j < timeA + t; ++j) {
            a[j] = wayA;
            wayA += v;
        }

        timeA += t;
    }

    for(int i = 0; i < m; ++i) {
        int v, t;
        cin >> v >> t;

        for(int j = timeB; j < timeB + t; ++j) {
            b[j] = wayB;
            wayB += v;
        }

        timeB += t;
    }

    int cnt = 0;

    for(int i = 0; i < timeA; ++i) {
        // cout << a[i] << " " << b[i] << endl;
        if(i == 0) {
            continue;
        }
        else if(a[i - 1] == b[i - 1] && a[i] != b[i]) {
            cnt++;
            // cout << a[i] << " " << b[i] << endl;    
        }
        else if(a[i - 1] > b[i - 1] && a[i] < b[i]) {
            cnt++;
            // cout << a[i] << " " << b[i] << endl;
        
        }
        else if(a[i - 1] < b[i - 1] && a[i] > b[i]) {
            cnt++;
            // cout << a[i] << " " << b[i] << endl; 
        
        }
    }

    cout << cnt - 1;
    return 0;
}