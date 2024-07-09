#include <iostream>
#include <algorithm>
using namespace std;

class Person {
    public :
        string name;
        int height;
        double weight;

        Person() {

        }

        Person(string a, int b, double c) {
            name = a;
            height = b;
            weight = c;
        }
};

bool order1(Person a, Person b) {
    return a.name < b.name;
}

bool order2(Person a, Person b) {
    return a.height > b.height;
}

int main() {
    // 여기에 코드를 작성해주세요.
    Person person[5];

    for(int i = 0; i < 5; ++i) {
        string a;
        int b;
        double c;

        cin >> a >> b >> c;
        person[i] = Person(a, b, c);
    }

    sort(person, person + 5, order1);
    cout << fixed;
    cout.precision(1);

    cout << "name" << endl;
    for(int i = 0; i < 5; ++i) {
        cout << person[i].name << " ";
        cout << person[i].height << " ";
        cout << person[i].weight << endl;
    }
    sort(person, person + 5, order2);

    cout << fixed;
    cout.precision(1);
    cout << endl << "height" << endl;

    for(int i = 0; i < 5; ++i) {
        cout << person[i].name << " ";
        cout << person[i].height << " ";
        cout << person[i].weight << endl;
    }

    return 0;
}