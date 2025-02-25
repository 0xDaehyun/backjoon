#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, X;
    cin >> N >> X; // 날짜를 입력받습니다. , N은 전체 배열의 크기 , X는 일부 날짜

    vector<int> date(N); // 입력받는 수

    for (int i = 0; i < N; i++)
    {
        cin >> date[i];
    } // 배열 입력받기

    vector<int> arr(N - X + 1);

    for (int i = 0; i < X; i++)
    {
        arr[0] += date[i];
    } // 초기값 세팅

    for (int i = 1; i < N - X + 1; i++) // 초기값을 기주느로 빼주고 더해주는 값을 비교하면 된다.
    {
        arr[i] = arr[i - 1] - date[i - 1];
        arr[i] += date[X + i - 1];
    }

    int zero = 0;                                   // 모든 배열의 합이 0인지를 검사하는 변수.
    int count = 0;                                  // 최대 조회수가 몇번 나타는지 보여주는 변수.
    int MAX = *max_element(arr.begin(), arr.end()); // x기간동안 더한 숫자중 최댓값을 찾는 함수.

    for (int l = 0; l < N - X + 1; l++)
    {
        zero += arr[l]; // 모든 수를 더해 zero 변수 초기화

        if (arr[l] == MAX) // 최대 값은 몇번 나타나는지 초기화하기.
        {
            count++;
        }
    }

    if (zero == 0)
    {
        cout << "SAD" << endl;
    }

    else
    {
        cout << MAX << endl;
        cout << count << endl;
    }

    return 0;
}