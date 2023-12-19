// #include <iostream>
// using namespace std;

// class Game {
//     public:
//     string id;
//     int level;

//     Game(string id = "codetree", int level = 10) {
//         this->id = id;
//         this->level = level;
//     }
// };

// int main() {
//     // 여기에 코드를 작성해주세요.

//     string id;
//     int level;

//     cin >> id >> level;

//     Game game1 = Game();
//     Game game2 = Game(id, level);

//     cout << "user " << game1.id << " lv " << game1.level << endl;
//     cout << "user " << game2.id << " lv " << game2.level << endl;
 
//     return 0;
// }

#include <iostream>
#include <string>
#include <utility>
using namespace std;

pair<string, int> user1 = make_pair("codetree", 10);
pair<string, int> user2;

int main() {
    string user2_id;
    int user2_level;

    cin >> user2_id >> user2_level;

    user2 = make_pair(user2_id, user2_level);

    cout << "user " << user1.first << " lv " << user1.second << endl;
    cout << "user " << user2.first << " lv " << user2.second << endl;

    return 0;
}