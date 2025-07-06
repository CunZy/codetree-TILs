#include <iostream>

using namespace std;

int n, m;
int arr[100];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        int a1, a2;
        cin >> a1 >> a2;

        int t = 0;
        for(int j = a1 - 1; j < a2; ++j) {
            t += arr[j];
        }

        cout << t << endl;
    }

    // Please write your code here.

    return 0;
}