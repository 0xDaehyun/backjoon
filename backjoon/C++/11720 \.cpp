#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<char> arr(N);
    int add = 0;
    for (int i = 0; i < N; i++)
    {
        char input;
        cin >> input;
        arr[i] = input;
        int k = arr[i] - '0';
        add += k;
    }

    cout << add;

    return 0;
}