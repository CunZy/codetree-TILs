#include <iostream>
using namespace std;
#define MAX 1000

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int arr[MAX];

    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    int cnt=0, ans=0, flag=0;

    for (int i=0; i<n; i++){
        if (i==0 || arr[i] > 0){
            if (flag == -1){
                cnt=0; 
            }
            flag=1; cnt++;
            ans = max(ans, cnt);
        }else if (arr[i]<0){
            if (flag == 1){
                cnt=0;
            }
            flag=-1; cnt++;
            ans = max(ans, cnt);
        }
    }

    cout << ans;
    return 0;
}