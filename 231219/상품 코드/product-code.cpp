#include <iostream>
using namespace std;

class Present {
    public:
    string name;
    int code;

    Present(string name, int code) {
        this->name = name;
        this->code = code;
    }
};

int main() {
    // 여기에 코드를 작성해주세요.
    Present pre1 = Present("codetree", 50);

    string a;
    int b;
    cin >> a >> b;
    Present pre2 = Present(a, b);

    cout << "product " << pre1.code << " is " << pre1.name << endl;
    cout << "product " << pre2.code << " is " << pre2.name << endl;
    return 0;
}