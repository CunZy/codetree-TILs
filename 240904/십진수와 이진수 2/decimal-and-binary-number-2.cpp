#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n=0, cnt=0;
    int arr[20]={};
    string binary;
    cin >> binary; 

    for(int i=0; i<(int)binary.size(); i++){
        n = n*2 + (int)binary[i] - '0';
    }

    n *= 17;

    while (true){
        if (n < 2){
            arr[cnt++] = n;
            break;
        }

        arr[cnt++] = n%2;
        n /= 2;
    }

    for (int i=cnt-1; i>= 0; i--){
        cout << arr[i];
    }
    return 0;
}