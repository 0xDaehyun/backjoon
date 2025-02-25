#include <iostream>
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

    for (int i = 0; i < N; i++)
    {
        for (int k = 0; k < M; k++)
        {
            cout << arr[i][k];
        }
    }

    return 0;
}