#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;

    cin >> a;

    int total[20] = {};
    int here = 0;

    for(int i = 0; i < a.length(); ++i) {
        total[i] = a[i] - '0';
    }

    int sip = 0;

    for(int i = 0; i < a.length(); ++i) {
        sip = sip * 2 + total[i];
    }


    sip *= 17;

    int tot[20] = {};

    while(true) {
        if(sip < 2) {
            tot[here++] = sip;
            break;
        }

        tot[here++] = sip % 2;
        sip /= 2;
    }

    for(int i = here - 1; i >= 0; --i) {
        cout << tot[i];
    }

    return 0;
}