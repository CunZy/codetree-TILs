#include <iostream>
using namespace std;

class Mission {
    public:
    string code;
    char color;
    int time;

    Mission(string code, char color, int time) {
        this->code = code;
        this->color = color;
        this->time = time;
    }

    Mission() {}
};

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    char b;
    int c;

    cin >> a >> b >> c;

    Mission m = Mission(a, b, c);

    cout << "code : " << m.code << endl;
    cout << "color : " << m.color << endl;
    cout << "second : " << m.time << endl;
    return 0;
}