#include <iostream>
using namespace std;

void Hello(int n) {
    if(n == 0) {
        return;
    }
    Hello(n - 1);
    cout << "HelloWorld\n";
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    Hello(n);
    
    return 0;
}