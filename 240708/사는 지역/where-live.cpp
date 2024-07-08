#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

class Person {
    public:
        string name;
        string bun;
        string region;

        Person() {}

        Person(string n, string b, string r) {
            name = n;
            bun = b;
            region = r;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;

    Person person[10];

    string e[10];

    for(int i = 0; i < n; ++i) {
        string a, b, c;
        cin >> a >> b >> c;
        e[i] = a;
        person[i] = Person(a, b, c);
    }

    sort(e, e + n, greater<string>());

    for(int i = 0; i < n; ++i) {
        if(e[0] == person[i].name) {
            cout << "name " << person[i].name << endl;
            cout << "addr " << person[i].bun << endl;
            cout << "city " << person[i].region << endl;
            break;
        }
    }
    return 0;
}