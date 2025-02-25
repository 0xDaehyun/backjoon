#include <iostream>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false); // C++의 iostream과 C의 stdio의 동기화 해제
    std::cin.tie(nullptr);            // cin과 cout의 묶음을 풀어줌
    int A, B;

    while (cin >> A >> B)
    {
        cout << A + B << "\n";
    }
    return 0;
}