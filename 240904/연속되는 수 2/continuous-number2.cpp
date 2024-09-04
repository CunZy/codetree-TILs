#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt=0, n;
    cin >> n;
    int arr[n] = {};
    int save[20]={0};

    for(int i=0; i<n; i++){
        cin >> arr[i];
        if (i==0 || arr[i] == arr[i-1]){
            cnt++;
        }else if (arr[i] != arr[i-1]){
            save[i] = cnt;
        }
    }
    cnt = 1;
    for(int i=0; i<n; i++){
        if(save[i]>cnt){
            cnt = save[i];
        }
    }
    cout << cnt;
    return 0;
}