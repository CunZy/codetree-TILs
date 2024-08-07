#include <iostream>
#include <algorithm>
using namespace std;

class Person {
    public :
        string name;
        int height;
        int weight;

        Person() {}
        Person(string n, int h, int w) {
            name = n;
            height = h;
            weight = w;
        }
};

bool order(Person a, Person b) {
    return a.height < b.height;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    Person person[10];

    for(int i = 0; i < n; ++i) {
        string a;
        int b, c;
        cin >> a >> b >> c;
        person[i] = Person(a, b, c);
    }

    sort(person, person + n, order);

    for(int i = 0; i < n; ++i) {
        cout << person[i].name << " " << person[i].height << " " << person[i].weight << endl;
    }
    return 0;
}