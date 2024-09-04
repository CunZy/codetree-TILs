#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    string n;
    cin >> a >> b;
    cin >> n;

    int arr[20]={}, cnt=0, num = 0;

    for (int i=0; i<(int)n.size(); i++){
        num = num*a + (int)n[i] -'0';
    }

    while(true){
        if (num < b){
            arr[cnt++] =num;
            break;
        }

        arr[cnt++] = num % b;
        num /= b;
    }

    for (int i=cnt-1; i>=0; i--){
        cout << arr[i];
    }

    return 0;
}