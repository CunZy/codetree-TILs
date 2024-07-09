#include <iostream>
#include <algorithm> 
using namespace std;

class Student {
    public :
        int kor, eng, math;
        string name;

        Student(string n, int a, int b, int c) {
            name = n;
            kor = a;
            eng = b;
            math = c;
        }

        Student() {}
};

bool order(Student a, Student b) {
    return a.kor + a.eng + a.math < b.kor + b.eng + b.math;
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

    sort(student, student + n, order);

    for(int i = 0; i < n; ++i) {
        cout << student[i].name << " " << student[i].kor << " " << student[i].eng << " " << student[i].math << endl;
    }
    return 0;
}