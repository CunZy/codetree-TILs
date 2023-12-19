#include <iostream>
using namespace std;

class Game {
    public:
    string id;
    int level;

    Game(string id = "codetree", int level = 10) {
        this->id = id;
        this->level = level;
    }
};

int main() {
    // 여기에 코드를 작성해주세요.

    string id;
    int level;

    cin >> id >> level;

    Game game1 = Game();
    Game game2 = Game(id, level);

    cout << "user " << game1.id << " lv " << game1.level << endl;
    cout << "user " << game2.id << " lv " << game2.level << endl;
 
    return 0;
}