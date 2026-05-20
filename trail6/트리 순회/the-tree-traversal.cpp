#include <iostream>
#include <unordered_map>
using namespace std;

#define MAX_N 26

int n;
unordered_map<char, int> parent;
int Left[MAX_N + 1], Right[MAX_N + 1];

void PreOrder(char t) {
    if(t == '.') return;
    cout << t;
    PreOrder(Left[parent[t]]);
    PreOrder(Right[parent[t]]);
}

void InOrder(char t) {
    if(t == '.') return;
    InOrder(Left[parent[t]]);
    cout << t;
    InOrder(Right[parent[t]]);
}

void PostOrder(char t) {
    if(t == '.') return;
    PostOrder(Left[parent[t]]);
    PostOrder(Right[parent[t]]);
    cout << t;
}

int main() {
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        char a, b, c;
        cin >> a >> b >> c;

        parent[a] = i;
        Left[i] = b;
        Right[i] = c;
    }

    PreOrder('A');
    cout << endl;
    InOrder('A');
    cout << endl;
    PostOrder('A');
    cout << endl;
}