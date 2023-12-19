// #include <iostream>
// using namespace std;

// class Mission {
//     public:
//     string code;
//     string location;
//     int time;

//     Mission(string code, string location, int time) {
//         this->code = code;
//         this->location = location;
//         this->time = time;
//     }
// };

// int main() {
//     // 여기에 코드를 작성해주세요.
//     string a, b;
//     int c;

//     cin >> a >> b >> c;

//     Mission mission = Mission(a, b, c);

//     cout << "secret code : " << mission.code << endl;
//     cout << "meeting point : " << mission.location << endl;
//     cout << "time : " << mission.time << endl;
//     return 0;
// }

#include <iostream>
#include <tuple>
using namespace std;

int main() {
    string code;
    char point;
    int time;

    cin >> code >> point >> time;

    tuple<string, char, int> spy;

    spy = make_tuple(code, point, time);

    string a;
    char b;
    int c;

    tie(a, b, c) = spy;

    cout << "secret code : " << a << endl;
    cout << "meeting point : " << b << endl;
    cout << "time : " << c << endl;
    return 0;
}