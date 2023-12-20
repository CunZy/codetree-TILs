#include <iostream>
#include <algorithm>
using namespace std;

class Student {
    public:
    string n;
    int k, e, m;

    Student(string name, int kor, int eng, int mat) {
        n = name;
        k = kor;
        e = eng;
        m = mat;
    }

    Student() {}
};

bool Sort(Student &a, Student &b) {
    return a.k + a.e + a.m < b.k + b.e + b.m;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    Student student[10];

    for(int i = 0; i < n; ++i) {
        string a;
        int b, c, d;

        cin >> a >> b >> c >> d;

        student[i] = Student(a, b, c, d);
    }

    sort(student, student + n, Sort);

    for(int i = 0; i < n; ++i) {
        cout << student[i].n << " " << student[i].k << " " << student[i].e << " " << student[i].m << endl;
    }
    return 0;
}