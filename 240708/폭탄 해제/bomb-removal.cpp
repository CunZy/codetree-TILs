#include <iostream>
using namespace std;

class Remove {
    public :
        string code;
        string color;
        int time;

        Remove(string c, string o, int t) {
            code = c;
            color = o;
            time = t;
        }

        Remove() {}
};

int main() {
    // 여기에 코드를 작성해주세요.
    Remove r;
    string a, b;
    int c;

    cin >> a >> b >> c;

    r = Remove(a, b, c);

    cout << "code : " << r.code << endl;
    cout << "color : " << r.color << endl;
    cout << "second : " << r.time << endl;
    return 0;
}