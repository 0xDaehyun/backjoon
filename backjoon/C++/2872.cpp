#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int move = 0;
    int target = N;

    for (int i = N - 1; i >= 0; i--) // 버블정렬시작. , 시간초과의 원인.
    {
        if (arr[i] == target)
        {
            target--;
        }
        else
        {
            move++;
        }
    }

    cout << move;

    return 0;
}