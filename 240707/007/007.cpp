#include <iostream>
using namespace std;

class agent {
    public : 
        string code;
        string place;
        int time;

        agent(string c, string p, int t) {
            code = c;
            place = p;
            time = t;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    int c;

    cin >> a >> b >> c;

    agent w = agent(a, b, c);

    cout << "secret code : " << w.code << endl;
    cout << "meeting point : " << w.place << endl;
    cout << "time : " << w.time << endl;
    return 0;
}