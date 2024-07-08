#include <iostream>
using namespace std;

class qwer {
    public:
        string name;
        int code;

        qwer(string n = "codetree", int c = 50) {
            name = n;
            code = c;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    qwer q;

    string a;
    int b;
    cin >> a >> b;

    qwer w = qwer(a, b);

    cout << "product " << q.code << " is " << q.name << endl;
    cout << "product " << w.code << " is " << w.name << endl;
    return 0;
}