#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    cin >> n >> k;
    int arr[n]= {0};
    int a, b;
    for(int i=0; i<k; i++){
        cin >> a >> b;
        for (int j=a-1; j<b; j++){
            arr[j] += 1;
        }
    }
    int num =0;
    for(int i=0; i<n; i++){
        if (arr[i]>num){
            num = arr[i];
        }
    }

    cout << num;
    return 0;
}