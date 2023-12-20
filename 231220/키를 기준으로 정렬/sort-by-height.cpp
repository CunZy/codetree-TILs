#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Person {
    public:
    string name;
    int height;
    int weight;

    Person(string name, int height, int weight) {
        this->name = name;
        this->height = height;
        this->weight = weight;
    }

    Person() {}
};

bool cmp(Person &a, Person &b) {
    return a.height < b.height;
}

int main() {
    // 여기에 코드를 작성해주세요.
    Person person[10];

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        string name;
        int height;
        int weight;
        cin >> name >> height >> weight;
        person[i] = Person(name, height, weight);
    }

    sort(person, person + n, cmp);

    for(int i = 0; i < n; ++i) {
        cout << person[i].name << " " << person[i].height << " " << person[i].weight << endl;
    }

    return 0;
}