#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

        int N; // 피자를 먹는 사람들의 수.
        cin >> N;
        vector<int> list(N);
        vector<int> time(N);

        for (int input = 0; input < N; input++)
        {
                cin >> list[input];
        } // 벡터에 입력시킨다.

        int add = 1;
        int time_add = 0;

        while (add > 0)
        {
                // 벡터에 입력시킨다.
                add = 0;
                for (int minus = 0; minus < N; minus++)
                {
                        if (list[minus] > 0)
                        {
                                list[minus]--; // 필요한 피자값을 뺀다.
                                time_add++;
                                time[minus] = time_add; // 각 사람의 시간을 더한다.
                        }
                }

                for (int plus = 0; plus < N; plus++)
                {
                        add += list[plus];
                }
        } // 피자를 하나씩 뺀다.

        for (int j = 0; j < N; j++)
        {
                cout << time[j] << " ";
        }

        return 0;
}
