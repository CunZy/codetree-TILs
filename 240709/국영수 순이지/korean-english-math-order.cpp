#include <iostream>
#include <algorithm>
using namespace std;

class Grade {
    public :
        string name;
        int kor, eng, math;

        Grade() {}
        Grade(string n, int a, int b, int c) {
            kor = a;
            eng = b;
            math = c;
            name = n;
        }
};

bool order(Grade a, Grade b) {
    if(a.kor == b.kor) {
        if(a.eng == b.eng) {
            return a.math > b.math;
        }
        return a.eng > b.eng;
    }
    return a.kor > b.kor;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    Grade grade[10];

    for(int i = 0; i < n; ++i) {
        int a, b, c;
        string w;
        cin >> w >> a >> b >> c;

        grade[i] = Grade(w, a, b, c);
    }

    sort(grade, grade + n, order);

    for(int i = 0; i < n; ++i) {
        cout << grade[i].name << " " << grade[i].kor << " " << grade[i].eng << " " << grade[i].math << endl;
    }
    return 0; 
}