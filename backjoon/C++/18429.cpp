#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int N, K;
    int KG = 500;

    cin >> N >> K; // 운동키트와 중량 감소량

    vector<int> arr(N);

    for (int i = 0; i < N; N++)
    {
        cin >> arr[i];
    }

    int count = 0;

    while (N < 0)
    {

        for (int u = 0; u < N; u++)
        {
            arr[u] = arr[u] - K;
        }

        if (KG >= 500)
        {
            count++;
        }
        N--;
    }

    return 0;
}