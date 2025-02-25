#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

// DFS 는 스택 혹은 재귀함수를 이용하여 구현한다. 스택은 선입 후출.
void DFS(int node, vector<vector<int>> &graph, vector<bool> &visited)
{
    visited[node] = true; // DFS는 처음부터 방문하여 깊게 끝까지 갔다가 오는 스타일이다.
    cout << node << " ";  // 출력

    for (int next : graph[node])
    {
        if (!visited[next])
        {
            DFS(next, graph, visited); // 재귀 호출
        }
    }
}
// BFS 는 큐를 이용하여 구현한다. 큐는 후입 선출.
void BFS(int start, vector<vector<int>> &graph, vector<bool> &visited)
{
    queue<int> q; // 큐 선언하기
    q.push(start);
    visited[start] = true;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int next : graph[node])
        {
            if (!visited[next])
            {
                visited[next] = true;
                q.push(next);
            }
        }
    }
}

int main()
{

    int N, M; // 정점과 간선의 개수.

    int V; // 탐색을 시작할 정점의 번호.

    cin >> N >> M >> V; // 각 정점과 간선의 수 , 시작할 정점의 번호를 입력한다

    vector<vector<int>> graph(N + 1);   // 2차원 배열을 벡터로 받는다.
    vector<bool> visited(N + 1, false); // 방문 여부를 기록하는 배열

    for (int i = 0; i < M; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v); // push_back 은 노드와 노드 간선을 추가하는 역할을 한다.
        graph[v].push_back(u); // push_back 은 노드와 노드 간선을 추가하는 역할을 한다.
    } // 여기까지는 그래프를 완성시킨다.

    for (int i = 1; i <= N; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    } // 각 행에 저장된 값들을 오름차순으로 정렬한다.

    DFS(V, graph, visited);
    cout << "\n";
    fill(visited.begin(), visited.end(), false);

    BFS(V, graph, visited);

    return 0;
}