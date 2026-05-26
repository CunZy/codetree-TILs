#include <iostream>
#include <vector>
#include <queue>

#define MAX_N 100000

using namespace std;

// 변수 선언
int n, m;

vector<int> edges[MAX_N + 1];

// 진입차수를 관리합니다.
int indegree[MAX_N + 1];

// 위상정렬을 위한 큐를 관리합니다.
queue<int> q;

int main() {
    // 입력:
    cin >> n >> m;

    // 인접리스트로 관리합니다.
    for(int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;

        edges[x].push_back(y); 
        indegree[y]++; // 진입차수를 갱신합니다.  
    }

    // 처음 indegree 값이 0인 곳이 시작점이 됩니다.
    // 이 노드들을 queue에 넣어줍니다.
    for(int i = 1; i <= n; i++)
        if(!indegree[i])
            q.push(i);
    
    // 위상정렬을 진행합니다.
    // queue에 원소가 남아있다면 계속 진행합니다.
    int cnt = 0;
    while(!q.empty()) {
        // 가장 앞에 있는 원소를 뽑아줍니다.
        int x = q.front();
        q.pop();

        // 큐에서 뽑힌 원소의 수를 세줍니다.
        cnt++;

        // x에서 갈 수 있는 모든 곳을 탐색합니다.
        for(int i = 0; i < (int) edges[x].size(); i++) {
            int y = edges[x][i];

            // 해당 노드의 indegree를 1만큼 감소시켜줍니다.
            indegree[y]--;

            // 비로소 indegree가 0이 되었다면
            // queue에 새로 넣어줍니다.
            if(!indegree[y])
                q.push(y);
        }
    }

    // 큐에 총 n개의 수가 들어갔다면 사이클 없이 정상적으로 topological sort가 구해졌다는 뜻이므로
    // 모순이 없게 됩니다.
    if(cnt == n)
        cout << "Consistent";
    else
        cout << "Inconsistent";
    return 0;
}
