#include <iostream>
using namespace std;
#define MAX 1000

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[MAX]={};
    int n;
    cin >> n;

    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    int cnt=0, ans=0;
    for (int i=0; i<n; i++){
        if (i>=1 && arr[i] - arr[i-1] > 0){
            cnt++;
        }else {
            cnt = 1;
        }
        ans = max(ans, cnt);
    }

    cout << ans;
    return 0;
}