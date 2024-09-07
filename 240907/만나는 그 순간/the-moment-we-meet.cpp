#include <iostream>
using namespace std;
#define MAX 1000
int main() {
    // 여기에 코드를 작성해주세요.

    int n, m;
    int a_pos[MAX+1], b_pos[MAX+1];

    cin >> n >> m;
    int time=1;
    int t; char dir;
    for(int i = 0; i < n; i++) {
        cin >> dir >> t;

        while(t--){
            if(dir=='R'){
                a_pos[time] = a_pos[time-1] +1;
            }else {
                a_pos[time] = a_pos[time-1] -1;
            }
            time++;
        }
    }

    time =1;
    for(int i = 0; i < m; i++) {
        cin >> dir >> t;
        while(t--){
            if(dir=='R'){
                b_pos[time] = b_pos[time-1] +1;
            }else {
                b_pos[time] = b_pos[time-1] -1;
            }time++;
        }
    }

// 최초로 만나는 시간을 구합니다.
    int ans = -1;
    for(int i = 1; i < time; i++) {
        if(a_pos[i] == b_pos[i]) {
            ans = i;
            break;
        }
    }
    
    cout << ans;

    return 0;
}