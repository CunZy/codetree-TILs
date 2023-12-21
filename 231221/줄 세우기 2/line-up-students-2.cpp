#include <iostream>
#include <algorithm>
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
    if(a.height != b.height) {
        return a.height < b.height;
    }
    return a.weight < b.height;
}

int main() {
    // 여기에 코드를 작성해주세요.
    Student student[1000];
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int h, w;
        cin >> h >> w;
        student[i] = Student(h, w, i + 1);
    }

    sort(student, student + n, Sort);

    for(int i = 0; i < n; ++i) {
        cout << student[i].height << " " << student[i].weight << " " << student[i].number << endl;
    }
    
    return 0;
}