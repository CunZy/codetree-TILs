#include <iostream>
#include <algorithm>
using namespace std;

class Person {
    public:
    string name;
    string bun;
    string region;

    Person(string name, string bun, string region) {
        this->name = name;
        this->bun = bun;
        this->region = region;
    }

    Person() {}
};

int main() {
    // 여기에 코드를 작성해주세요.
    Person person[10];

    int n;
    cin >> n;

    string m[10];

    for(int i = 0; i < n; ++i) {
        string a, b, c;
        cin >> a >> b >> c;
        m[i] = a;
        person[i] = Person(a, b, c);
    }

    sort(m, m + n);

    for(int i = 0; i < n; ++i) {
        if(m[n - 1] == person[i].name) {
            cout << "name " << person[i].name << endl;
            cout << "addr " << person[i].bun << endl;
            cout << "city " << person[i].region << endl;
        }
    }

    return 0;
}