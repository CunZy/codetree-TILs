#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

bool isTrue2(int j) {
    for(int i = 0; i < pattern.size(); ++i) {
        if(text[i + j] != pattern[i]) {
            return false;
        }
    }
    return true;
}

int isTrue() {
    int c = -1;
    for(int i = 0; i <= text.size() - pattern.size(); ++i) {
        if(isTrue2(i)) {
            c = i;
            break;
        }
    }
    return c;
}

int main() {
    cin >> text;
    cin >> pattern;

    // Please write your code here.
    cout << isTrue();
    return 0;
}