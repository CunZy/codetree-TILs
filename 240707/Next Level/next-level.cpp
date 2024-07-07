#include <iostream>
using namespace std;

class User {
    public :
        string id;
        int level;

        User(string i = "codetree", int l = 10) {
            id = i;
            level = l;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string id;
    int level;

    cin >> id >> level;
    
    User t = User();
    User u = User(id, level);

    cout << "user " << t.id << " lv " << t.level << endl;
    cout << "user " << u.id << " lv " << u.level << endl;
    return 0;
}