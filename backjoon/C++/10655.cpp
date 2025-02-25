// 문제 메커니즘 -> 1. 각 체크포인트와 체크포인트 사이의 거리중 두군데를 빵꾸 낼거임
// 1-3-4 , 1-2-4 경우의 수는 N - 2 가지
// 처음과 끝은 살아있다. 중간에 한 포인트만 삭제한다.
// case 1) 1-2  = 11  ,1-3 = 12
// case 2) 2-3 = 7 , 2-4 = 5
// case 3) 3-4 = 2
// 이때 문제에서 나온 14라는 값은 체크포인트 2번을 삭제한 경우 ,
// 즉 큰 알고리즘 = 첫지점과 N-1 지점까지의 거리를 비교하여
// 거리를 전부 구하기 보다는 갱신하는 방식이 최적화에 도움이 될 가능성 높음.
// 이 문제의 핵심 논리는 "트리 구조를 활용 하는 것"이다.

#include <iostream>
#include <vector>
using namespace std;
int N;
int X1, Y1;
int X2, Y2;
vector<vector<int>> arr(N, vector<int>(2)); // 열이 2개 , N개의 행을 가지는 벡터
vector<int> dis(N);                         // 답을 저장하는 벡터
int result = 0;                             // 답을 갱신하는 변수 선언.

void distance(int A, int B) // 거리 구하는 함수. (중간에 쌩까는 알고리즘이 필요하다.)
{                           // if 문 넣어서 쌩까게 하면 될거같은데

    int result = 0; // 답을 갱신하는 변수 선언.
    int x_add = 0;
    int y_add = 0; // x, y 좌표 갱신.

    for (int i = 0; i < N; i++)
    {
        if (arr[i][0] == A && arr[i][1] == B) // 그 숫자만 쌩까는 알고리즘.
        {
            continue;
        }
        else
        {
            x_add = arr[i][0] - x_add;
            if (x_add < 0)
            {
                x_add *= -1;
            }
            int y_add = arr[i][1] - y_add;
            if (y_add < 0)
            {
                y_add *= -1;
            }
            result = result + (x_add + y_add);
        }
    }
}
// 이제 result 값을 갱신하는 알고리즘 제작 필요.
int main()
{
    cin >> N;                   // 체크포인트의 개수를 입력받습니다.
    for (int i = 0; i < N; i++) // 좌표에 대한 정보를 행과 열로써 입력 받습니다.
    {
        for (int k = 0; k < N; k++)
        {
            cin >> arr[i][k];
        }
    }
    // 참고 : arr[체크포인트 숫자  - 1][0 , 1은 각각 x와 y 에 대한 정보를 가지고 있다. = 첫번째 체크포인트.

    for (int i = 1; i < N - 2; i++)
    {
        distance(arr[i][0], arr[i][1]);
        dis[i] = result;
    }
    sort(dis.begin(), dis.end()); // 오름차순 정렬.

    cout << dis[N - 1] << endl; // 답 출력.

    return 0;
}
