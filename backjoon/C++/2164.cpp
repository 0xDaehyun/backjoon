#include <iostream>
#include <vector>
#include <queue>
using namespace std;
// 1. 제일 위에 있는 카드는 버린다.
// 2. 그다음 밑에 있는 카드를 맨 밑으로 내린다.

int main()
{

    int N;
    cin >> N;

    queue<int> q;

    for (int i = 1; i <= N; i++) // N 값에 다다를떄까지 queue 에 저장한다.
    {
        q.push(i);
    }
    // 12345 - > 2345 - > 3452 -> 452 -> 524 -> 24 -> 42 -> 2 이 알고리즘.
    // 123456 -> 23456 - > 34562 - > 4562 -> 5624 - > 624 -> 246 - > 46 - > 64 - > 4
    // 123 - > 23 - > 32 -> 2
    int num = 1;

    while (q.size() > 1)
    {
        q.pop(); // 먼저 숫자를 일단 빼냅니다.
        q.push(q.front());
        q.pop();
    }

    int temp = q.front();

    cout << temp;

    return 0;
}