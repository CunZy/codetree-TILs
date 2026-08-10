#include <iostream>
using namespace std;

int a[100];

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for(int i = 1; i < n; ++i) {
        int j = i - 1;
        int key = a[i];
        while(j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    for(int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}