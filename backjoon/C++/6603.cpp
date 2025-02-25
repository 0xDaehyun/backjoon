#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int k;
    int r = 6;
    cin >> k;
    vector<int> arr(k);

    do
    {
        if (k == 0)
        {
            break;
        }
        for (int i = 0; i < k; i++)
        {
            cin >> arr[i];
        }
    } while (next_permutation(arr.begin(), arr.end()));
    return 0;
}