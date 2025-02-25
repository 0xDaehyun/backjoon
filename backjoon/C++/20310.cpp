#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 긴 문자열에 대한 처리는 string 으로 처리해야 올바르게 입력받아 초기화가 가능하다.

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin >> S;

    vector<char> arr(S.begin(), S.end()); // 문자열을 벡터로 초기

    int one = 0;
    int zero = 0;

    for (char c : arr)
    {
        if (c == '0')
        {
            zero++;
        }
        else
        {
            one++;
        }
    }

    zero = zero / 2;
    one = one / 2;

    string result = "";
    int removed_one = 0;
    for (char arr)

        return 0;
}