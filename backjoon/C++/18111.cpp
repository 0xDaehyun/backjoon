#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int N, M, B; // 세로 , 가로 , 인벤토리블럭 개수.

    cin >> N >> M >> B;
    vector<vector<int>> arr(N, vector<int>(M));

    for (int i = 0; i < N; i++)
    {
        for (int k = 0; k < M; k++)
        {
            cin >> arr[i][k];
        }
    }

    int max_val = 0; // 가장 작은 값으로 초기화
    for (int i = 0; i < N; i++)
    {
        int row_max = *max_element(arr[i].begin(), arr[i].end());
        max_val = max(max_val, row_max); // 전체 최대값 갱신
    }

    int mini_val = 0; // 가장 큰 값으로 초기화
    for (int i = 0; i < N; i++)
    {
        int row_min = *min_element(arr[i].begin(), arr[i].end()); // 행에서 최소값 찾기
        mini_val = min(mini_val, row_min);                        // 전체 최소값 갱신
    }

    // 최대에서 최소를 뺴는 방법.
    int time1 = 0;
    for (int i = 0; i < N; i++)
    {
        for (int k = 0; k < M; k++)
        {
            time1 += max_val - arr[i][k];
        }
    }

    // 블록을 쌓아서 평탄하게.
    int time2 = 0;
    for (int i = 0; i < N; i++)
    {
        for (int k = 0; k < M; k++)
        {
            time2 += arr[i][k] - mini_val;
            B--;
        }
    }

    if (B >= 0)
    {
        cout << time1 * 2 << " " << time2 << endl;
    }
    else
    {
        cout << time1 * 2 << endl;
    }
    return 0;
}