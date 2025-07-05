#include <iostream>

using namespace std;

int M, D;

int lastday(int m) {
    if(m == 2) {
        return 28;
    }
    if(m == 4 || m == 6 || m == 9 || m == 11) 
        return 30;
    return 31;
}

bool judge(int m, int d) {
    if(m <= 12 && d <= lastday(m)) {
        return true;
    }
    return false;
}

int main() {
    cin >> M >> D;

    // Please write your code here.
    if(judge(M, D))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}