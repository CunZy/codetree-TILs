#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    int c = a + b;

    string t = to_string(c);

    int count = 0;

    for(int i = 0; i < t.length(); ++i) {
        if(t[i] == '1') {
            ++count;
        }
    }

    cout << count << endl;
    return 0;
}