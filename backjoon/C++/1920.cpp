#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    ;      // N(1 ≤ N ≤ 100,000)
    int M; // N(1 ≤ N ≤ 100,000)

    cin >> N;
    int *A = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    cin >> M;
    int *compare = new int[M]; // 비교해야하는 M 에 대한 배열

    for (int j = 0; j < M; j++)
    {
        cin >> compare[j]; // 배열 입력
    }
    // 여기 까지는 배열의 입력 받는것

    sort(A, A + N);

    for (int i = 0; i < M; i++)
    {
        if (binary_search(A, A + N, compare[i]))
        {
            cout << "1" << "\n";
        }
        else
        {
            cout << "0" << "\n";
        }
    }

    delete[] A;
    delete[] compare;

    return 0;
}

// 내장함수 없이 이진탐색을 구성해보자