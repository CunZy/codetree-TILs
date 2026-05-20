#include <iostream>
#include <unordered_map>
using namespace std;

int n;
unordered_map<char, int> a;
char L[27];
char R[27];

void PreOrder(char idx) {
    if(idx == '.' || idx == ' ') return;
    cout << idx;
    PreOrder(L[a[idx]]);
    PreOrder(R[a[idx]]);
}

void InOrder(char idx) {
    if(idx == '.' || idx == ' ') return;

    InOrder(L[a[idx]]);
    cout << idx;
    InOrder(R[a[idx]]);
}

void PostOrder(char idx) {
    if(idx == '.' || idx == ' ') return;

    PostOrder(L[a[idx]]);
    PostOrder(R[a[idx]]);
    cout << idx;
}

int main() {
    // Please write your code here.
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        char q, w, e;
        cin >> q >> w >> e;

        a[q] = i;
        L[i] = w;
        R[i] = e;
    }

    PreOrder('A');
    cout << endl;
    InOrder('A');
    cout << endl;
    PostOrder('A');
    return 0;
}