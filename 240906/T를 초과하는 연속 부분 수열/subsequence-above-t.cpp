#include <iostream>
using namespace std;
#define MAX 1000
int main() {
    // 여기에 코드를 작성해주세요.
    int n, t;
    int arr[MAX];

    cin >> n >> t;
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    int cnt=0, ans=0;

    for (int i=0; i<n; i++){
        if ( arr[i]-t > 0){
            cnt++;
        }else{
            cnt=0;
        }
        ans = max(ans, cnt);
    }

    cout << ans;
    return 0;
}