#include <iostream>
#include <vector>
using namespace std;
int R, C, E, N;
int row, col, depth; // 시작위치 , 몇번 밟아야 하는지의 변수.
vector<vector<int>> arr;
vector<vector<int>> times;

// 뭐가 많어 . 집중력 요함 . 어렵진 않음.

void steps(int &row, int &col, int &depth)
{
    int Max = 0;
    for (int j = row; j < min(row + 3, R); j++) // 최댓값 찾기 알고리즘.
    {
        for (int h = col; h < min(col + 3, C); h++)
        {
            if (Max < arr[j][h])
            {
                Max = arr[j][h];
            }
        }
    }
    int height = Max - depth; // 최대에서 빼주고.

    for (int j = row; j < row + 3; j++) // 땅 밟기 알고리즘 시작.
    {
        for (int h = col; h < col + 3; h++)
        {
            if (height < arr[j][h]) // 높이 평탄화
            {
                arr[j][h] = height;
            }
        }
    }
}
int main()
{

    cin >> R >> C >> E >> N; // 행 , 열 , 최종수위 , 땅 밟기 명령 개수.
    arr.resize(R, vector<int>(C));
    times.resize(N, vector<int>(3));

    for (int i = 0; i < R; i++) // 현재 전체 땅의 높이정보를 받습니다.
    {
        for (int k = 0; k < C; k++)
        {
            cin >> arr[i][k];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            cin >> times[i][k];
        }
    }
    for (int i = 0; i < N; i++)
    {
        row = 0;
        col = 0;
        depth = 0;
        row = times[i][0] - 1;
        col = times[i][1] - 1;
        depth = times[i][2];
        steps(row, col, depth); // 따로 연산을 처리하는 함수를 만들어 가독성 증가.
    }

    for (int i = 0; i < R; i++)
    {
        for (int k = 0; k < C; k++)
        {
            if (E < arr[i][k])
            {
                arr[i][k] = 0;
            }
            else
            {
                arr[i][k] = E - arr[i][k];
            }
        }
    }

    int add = 0;
    for (int i = 0; i < R; i++)
    {
        for (int k = 0; k < C; k++)
        {
            add += arr[i][k];
        }
    }
    cout << add * 72 * 72;

    return 0;
}