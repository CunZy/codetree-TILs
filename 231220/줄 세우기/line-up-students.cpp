#include <iostream>
#include <algorithm>
#include <tuple>
using namespace std;

class Student {
    public:
    int height, weight, number;

    Student() {}
    Student(int h, int w, int n) {
        height = h;
        weight = w;
        number = n;
    }
};

bool Sort(Student &a, Student &b) {
    return make_tuple(a.height, a.weight, -a.number) > make_tuple(b.height, b.weight, -b.number);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    Student student[1000];

    int c = 1;

    for(int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;

        student[i] = Student(a, b, c);
        ++c;
    }

    sort(student, student + n, Sort);

    for(int i = 0; i < n; ++i) {
        cout << student[i].height << " " << student[i].weight << " " << student[i].number << endl;
    }
    return 0;
}