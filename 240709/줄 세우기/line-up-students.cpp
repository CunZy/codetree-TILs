#include <iostream>
#include <algorithm>
using namespace std;

class Student {
    public: 
        int height, weight, number;

        Student() {}
        Student(int a, int b, int c) {
            height = a;
            weight = b;
            number = c;
        }
};

bool order(Student a, Student b) {
    if(a.height == b.height) {
        if(a.weight == b.weight) {
            return a.number < b.number;
        }
        return a.weight > b.weight;
    }
    return a.height > b.height;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;

    Student student[1000];

    for(int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        student[i] = Student(a, b, i + 1);
    }

    sort(student, student + n, order);

    for(int i = 0; i < n; ++i) {
        cout << student[i].height << " " << student[i].weight << " " << student[i].number << endl;
    }
    return 0;
}