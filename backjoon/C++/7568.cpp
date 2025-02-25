#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // 수학적 접근이 됐으면...... 아쉬움 // 조건 부합 xxxx
    int N, X, Y; // 변수 선언

    cin >> N;                      // 사람의 수를 입력받는다.
    vector<pair<int, int>> arr(N); // vector - > pair로 한번에 묶음으로 처리
    vector<int> rank(N, 1);

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }

    for (int k = 0; k < N; k++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[k].first < arr[j].first && arr[k].second < arr[j].second)
            {
                rank[k]++;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << rank[i] << " ";
    }
    return 0;
}