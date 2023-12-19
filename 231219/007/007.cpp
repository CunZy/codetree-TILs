#include <iostream>
using namespace std;

class Mission {
    public:
    string code;
    string location;
    int time;

    Mission(string code, string location, int time) {
        this->code = code;
        this->location = location;
        this->time = time;
    }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    int c;

    cin >> a >> b >> c;

    Mission mission = Mission(a, b, c);

    cout << "secret code : " << mission.code << endl;
    cout << "meeting point : " << mission.location << endl;
    cout << "time : " << mission.time << endl;
    return 0;
}