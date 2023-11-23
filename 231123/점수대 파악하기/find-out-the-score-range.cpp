#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int a[11] = {};

    for(int i = 0; i < 100; ++i) {
        cin >> arr[i];
        if(arr[i] == 0) {
            break;
        }

        a[arr[i] / 10]++;
    }

    for(int i = 10; i >= 1; --i) {
        cout << i * 10 << " - " << a[i] << endl;
    }
    return 0;
}