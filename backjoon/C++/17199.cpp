#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int N;
    cin >> N;

    vector<int> arr(N + 1, 0);
    int u, v;

    for (int i = 0; i < N; i++)
    {

        cin >> u >> v;
        arr[v]++;
    }
    int result = -1;

    for (int j = 0; j <= N; j++)
    {
    }

    return 0;
}