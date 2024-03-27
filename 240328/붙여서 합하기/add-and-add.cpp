#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    cin >> a >> b;

    string c = a + b;

    string d = b + a;

    int q = stoi(c);
    int w = stoi(d);

    cout << q + w;
    return 0;
}