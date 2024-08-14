#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;

    int count = 0;

    for(int i = 0; i < a.length(); ++i) {
        for(int j = i + 1; j < a.length(); ++j) {
            char b = a[i];
            char c = a[j];

            if(b == '(' && c == ')') {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}