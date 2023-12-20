#include <iostream>
#include <algorithm>
#include <tuple>
using namespace std;

class Student {
    public:
    string name;
    int k, e, m;

    Student(string name, int kor, int eng, int math) {
        k = kor;
        e = eng;
        m = math;
        this->name = name;
    }

    Student() {}
};

bool Sort(Student &a, Student &b) {
    return make_tuple(a.k, a.e, a.m) > make_tuple(b.k, b.e, b.m);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    Student student[10];

    for(int i = 0; i < n; ++i) {
        int a, b, c;
        string d;
        cin >> d >> a >> b >> c;
        student[i] = Student(d, a, b, c);
    }

    sort(student, student + n, Sort);

    for(int i = 0; i < n; ++i) {
        cout << student[i].name << " " << student[i].k << " " << student[i].e << " " << student[i].m << endl;
    }
    return 0;
}