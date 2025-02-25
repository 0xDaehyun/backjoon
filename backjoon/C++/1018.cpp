#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M; // 행, 열 입력

    // 체스판 데이터 입력
    vector<string> board(N);
    for (int i = 0; i < N; i++)
    {
        cin >> board[i]; // 각 줄에 M개의 문자 입력
    }

    int minRepaint = 1e9; // 최소 다시 칠해야 하는 칸 수

    // 모든 8×8 체스판 검사
    for (int i = 0; i <= N - 8; i++)
    {
        for (int j = 0; j <= M - 8; j++)
        {
            int repaintW = 0, repaintB = 0;

            // 8×8 부분 체스판 검사
            for (int r = 0; r < 8; r++)
            {
                for (int c = 0; c < 8; c++)
                {
                    char current = board[i + r][j + c];
                    if ((r + c) % 2 == 0)
                    {
                        if (current != 'W')
                            repaintW++;
                        if (current != 'B')
                            repaintB++;
                    }
                    else
                    {
                        if (current != 'B')
                            repaintW++;
                        if (current != 'W')
                            repaintB++;
                    }
                }
            }

            // 최소값 갱신
            minRepaint = min(minRepaint, min(repaintW, repaintB));
        }
    }

    cout << minRepaint << endl; // 결과 출력
    return 0;
}