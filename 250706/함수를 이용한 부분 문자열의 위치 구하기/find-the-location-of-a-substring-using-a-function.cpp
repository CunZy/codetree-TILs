#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

bool isTrue(int i) {
    for(int j = 0; j < pattern.length(); ++j) {
        if(text[i + j] != pattern[j]) {
            return false;
        }
    }

    return true;
}

int Position() {
    int j = -1;
    for(int i = 0; i <= text.length() - pattern.length(); ++i) {
        if(isTrue(i)) {
            j = i;
            break;
        }
    }

    return j;
}

int main() {
    cin >> text;
    cin >> pattern;

    // Please write your code here.

    cout << Position() << endl;
    return 0;
}