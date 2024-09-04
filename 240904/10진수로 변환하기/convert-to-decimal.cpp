#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    //int arr[10] = {};
    //cin >> arr[0]

// get it as a string
    string binary;
    cin >> binary;

    int num = 0;
    for (int i=0; i< (int)binary.size(); i++){
        num = num*2 + (binary[i]- '0'); //since binary is a string
    } //same as num = num*2 + binary[i]
    cout << num;
    return 0;
}