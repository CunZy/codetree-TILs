#include <iostream>
using namespace std;

class CodeName {
    public:
    int grade;
    char name;

    CodeName(char name, int grade) {
        this->name = name;
        this->grade = grade;
    }

    CodeName() {}
};

int main() {
    // 여기에 코드를 작성해주세요.
    CodeName agent[5];

    for(int i = 0; i < 5; ++i) {
        cin >> agent[i].name >> agent[i].grade;
    }

    int max = agent[0].grade;
    int t = 0;

    for(int i = 0; i < 5; ++i) {
        if(max > agent[i].grade) {
            max = agent[i].grade;
            t = i;
        }
    }

    cout << agent[t].name << " " << agent[t].grade;
    return 0;
}