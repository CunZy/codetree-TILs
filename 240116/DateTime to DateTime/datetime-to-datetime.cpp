#include <iostream>
using namespace std;

bool isTrue(int a, int b, int c) {
    if(a < 11) {
        return false;
    }
    else if(a == 11) {
        if(b < 11) {
            return false;
        }
        else if(b == 11) {
            if(c < 11) {
                return false;
            }
            else if(c >= 11) {
                return true;
            }
        }
        else {
            return true;
        }
    }
    else {
        return true;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    
    cin >> a >> b >> c;

    int time = 0;

    if(isTrue(a, b, c)) {
        while(true) {
            if(a == 11 && b == 11 && c == 11) {
                break;
            }

            time++;
            c--;
            if(c == -1) {
                b--;
                c = 59;
            }
            if(b == -1) {
                a--;
                b = 23;
            }
        }

        cout << time << endl;
    }
    else {
        cout << -1 << endl;
    }

    return 0;
}