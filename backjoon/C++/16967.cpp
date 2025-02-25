#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int H, W, X, Y;
    cin >> H >> W >> X >> Y;

    vector<vector<int>> B(H + X, vector<int>(W + Y)); // 확장된 배열 B
    vector<vector<int>> A(H, vector<int>(W));         // 복원할 배열 A

    // 배열 B 입력
    for (int i = 0; i < H + X; i++)
    {
        for (int j = 0; j < W + Y; j++)
        {
            cin >> B[i][j];
        }
    }

    // 배열 A 복원
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (i >= X && j >= Y)
            {
                A[i][j] = B[i][j] - A[i - X][j - Y];
            }
            else
            {
                A[i][j] = B[i][j];
            }
        }
    }

    // 배열 A 출력
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}