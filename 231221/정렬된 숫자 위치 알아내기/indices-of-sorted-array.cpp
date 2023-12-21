#include <iostream>
#include <algorithm>
using namespace std;

class Number {
    public:
    int order, number, later;

    Number() {}
    Number(int o, int n, int l = 0) {
        order = o;
        number = n;
        later = l;
    }
};

bool Sort(Number &a, Number &b) {
    if(a.number != b.number) {
        return a.number < b.number;
    }
    return a.order < b.order;
}

bool SortB(Number &a, Number &b) {
    return a.order < b.order;
}

int main() {
    // 여기에 코드를 작성해주세요.
    Number number[1000];
    int seq[1000];
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int q;
        cin >> q;
        seq[i] = q;
        number[i] = Number(i + 1, q);
    }

    sort(number, number + n, Sort);

    for(int i = 0; i < n; ++i) {
        number[i].later = i + 1;
    }

    sort(number, number + n, SortB);

    for(int i = 0; i < n; ++i) {
        cout << number[i].later << " ";
    }
    
    return 0;
}