#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100] = {};

    int n, q;
    cin >> n >> q;

    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for(int i = 0; i < q; ++i) {
        int t;
        cin >> t;
        int a, b;
        if(t == 1) {
            cin >> a;
            cout << arr[a - 1] << endl;
        }
        else if(t == 2) {
            cin >> a;
            int r = 0;
            for(int j = 0; j < n; ++j) {
                if(arr[j] == a) {
                    r = j + 1;
                    break;
                }
            }
            cout << r << endl;
        }
        else if(t == 3) {
            cin >> a >> b;
            for(int j = a - 1; j < b; ++j) {
                cout << arr[j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}