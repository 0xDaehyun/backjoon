#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N; // 언덕의 개수를 입력받습니다.
    vector<int> hill(N);

    for (int i = 0; i < N; i++) // 언덕의 높이 정보를 입력받습니다.
    {
        cin >> hill[i];
    }

    sort(hill.begin(), hill.end()); // 오름차순으로 정렬합니다.

    // 비용은 x 만큼 바꾸는데 x^2
    int cost = 0;

    for (int k = 0; k < N - 1; k++)
    {
        if (hill[N - 1] - hill[k] > 17)
        {
            cost += (hill[N] - hill[k]) * (hill[N - 1] - hill[k]); // 비용 업데이트.
        }
    }
    cout << cost;

    return 0;
}
