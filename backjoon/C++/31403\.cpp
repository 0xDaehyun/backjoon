#include <iostream>
using namespace std;
int main()
{
    char a, b;
    int c;
    string A, B;

    cin >> a >> b >> c;
    cout << a + b - c - (2 * '0') << '\n'; // 숫자열 출력
    A = a;
    B = b;
    char result = a + b;
    cout << a + b - c; // 문자열 출력 (아스키코드)
    return 0;
}