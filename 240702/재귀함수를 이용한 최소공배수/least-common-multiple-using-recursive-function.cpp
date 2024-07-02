#include <iostream>
using namespace std;

int n;

int getC(int a, int b) {
    int index = 1;
    if(a > b) {
        for(int i = 1; i <= b; ++i) {
            if(a % i == 0 && b % i == 0) {
                index = i;
            }
        }
    }
    else {
        for(int i = 1; i <= a; ++i) {
            if(a % i == 0 && b % i == 0) {
                index = i;
            }
        }
    }
    return index;
}

int get(int *a) {
    int answer = 0;

    answer = (a[0] * a[1]) / getC(a[0], a[1]);


    if(n > 2) {
        for(int i = 2; i < n; ++i) {
            answer = (answer * a[i]) / getC(answer, a[i]);
        }
    }
    return answer;
}

int main() {
    int a[10] = {};

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << get(a);
}