#include <iostream>
using namespace std;

int main() {
    int n, B;
    cin >> n >> B;
    int arr[20];
    int cnt=0;

    while (true){
        if (n<B){
            arr[cnt++] = n;
            break;
        }
        arr[cnt++] = n%B;
        n /= B;
    }
    // 여기에 코드를 작성해주세요.
    for (int i=cnt-1; i>=0; i--){
        cout << arr[i];
    }
    return 0;
}