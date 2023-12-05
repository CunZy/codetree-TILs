#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    cin >> a >> b;

    string c = a + b;
    string d = "";
    d.append(b);
    d.append(a);

    cout << stoi(c) + stoi(d) << endl;
    return 0;
}