#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int N, M;
    cin >> N >> M;

    vector<vector<int>> arr(N); // 배열 선언

    for (int i = 0; i < M; i++)
    {
        cin >> arr[M][i];
    }

    for (int i = 0; i < M; i++)
    {
        cout << arr[M][i];
    }

    return 0;
}