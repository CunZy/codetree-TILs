#include <iostream>
#include <deque>
using namespace std;

int main() {
    // Please write your code here.
    deque<int> t;
    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i) {
        t.push_back(i);
    }
    while(t.size() > 1) {
        t.pop_front();
        int q = t.front();
        t.push_back(q);
        t.pop_front();
    }
    cout << t.front();
    return 0;
}