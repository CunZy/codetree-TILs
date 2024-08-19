#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;

    int count = 0;

    for(int i = 0; i < a.length() - 1; ++i) {
        if(a[i] == '(' && a[i + 1] == '(') {
            for(int j = i + 2; j < a.length() - 1; ++j) {
                if(a[j] == ')' && a[j + 1] == ')') {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}