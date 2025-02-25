#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Permutation 함수 c++
int N, K, count1;
bool visited[9]; // 방문을 기록하는 배열.
int KG = 500;    // 처음 중량을 500으로설 정

void DFS(int day, int total, const vector<int> &arr) // 방문과 방문 완료처리를 하는 것이 핵심인 알고리즘.
{
    if (day == N - 1) // 날이 다 끝나면 경우의 수 세기
    {
        count1++;
        return;
    }
    for (int i = 0; i < N; i++)
    {
        if (visited[i] == true)
        {
            continue;
        }

        if (visited[i] && KG - K + arr[i] >= 500)
        {
            visited[i] = true;
            DFS(day + 1, KG - K + arr[i], arr);
            visited[i] = false;
        }
    }
}

// 메인함수부분
int main()
{

    cin >> N >> K; // 각각 운동의 종류, 중량 감소량
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
    {
        int input;
        cin >> input;
        arr.push_back(input); // 배열에 집어 넣기
    }

    DFS(0, 500, arr); // DFS 함수 불러오기.

    cout << count1;
    return 0;
}