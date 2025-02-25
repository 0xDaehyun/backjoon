#include <iostream>
#include <vector>
using namespace std;
int T, n, m;

void Raskal(int &n, int &m)
{

    if (n == m || m == 0)
    {
        cout << "1" << endl;
    }
    else
    {
        int a1 = m + 1;
        int result = a1;
        for (int i = 0; i < n - a1; i++)
        {
            result += m;
        }
        cout << result << endl;
    }
}

int main()
{
    cin >> T; // 테스트 케이스를 입력받는다.
    for (int i = 0; i < T; i++)
    {
        int n = 0;
        int m = 0;
        cin >> n >> m; // n , m 을 입력한다.
        Raskal(n, m);
    }

    return 0;
}
