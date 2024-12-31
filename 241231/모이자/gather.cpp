#include <iostream>

#include <algorithm>
#include <cstdlib>

using namespace std;

int n;
int a[100];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int max_num = 0;

    for(int i = 0; i < n; ++i) {
        int max_case = 0;
        for(int j = 0; j < n; ++j) {
            max_case += abs(a[i] - a[j]);
        }

        if(max_num < max_case) {
            max_num = max_case;
        }
    }

    cout << max_num;
    return 0;
}