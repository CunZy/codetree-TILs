#include <iostream>
#include <algorithm>
using namespace std;

class Person {
    public:
    string name;
    int height;
    double weight;

    Person() {}
    Person(string n, int h, double w) {
        name = n;
        height = h;
        weight = w;
    }
};

bool SortA(Person &a, Person &b) {
    return a.name < b.name;
}

bool SortB(Person &a, Person &b) {
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

    sort(person, person + 5, SortA);

    cout << fixed;
    cout.precision(1);

    cout << "name" << endl;
    for(int i = 0; i < 5; ++i) {
        cout << person[i].name << " " << person[i].height << " " << person[i].weight << endl;
    }
    cout << endl;

    sort(person, person + 5, SortB);

    cout << "height" << endl;
    for(int i = 0; i < 5; ++i) {
        cout << person[i].name << " " << person[i].height << " " << person[i].weight << endl;
    }
    
    return 0;
}