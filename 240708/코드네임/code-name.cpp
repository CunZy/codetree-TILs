#include <iostream>
using namespace std;

class Agent {
    public : 

        char name;
        int score;

        Agent(char n, int s) {
            name = n;
            score = s;
        }

        Agent() {}
};

int main() {
    // 여기에 코드를 작성해주세요.
    int index = 0, bs = 100;
    Agent agent[5];
    for(int i = 0; i < 5; ++i) {
        char a;
        int b;
        cin >> a >> b;
        agent[i] = Agent(a, b);
        if(bs > b) {
            bs = b;
            index = i;
        }
    }

    cout << agent[index].name << " " << agent[index].score << endl;
    return 0;
}