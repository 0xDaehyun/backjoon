#include <iostream>
#include <vector>    // vector 함수를 사용하기 위한 헤더이다.
#include <algorithm> //sort 함수를 사용하기 위한 헤더이다.

// 참고: vector는 동적 배열로, 크기 변경이 가능하다는 유연성을 제공한다.
// 하지만 크기 변경 시 메모리 재할당 및 복사가 발생할 수 있어, 항상 시간 복잡도에서 유리하지는 않다.
// 또한, vector를 사용한 정렬에는 std::sort를 사용하며, 이 경우 시간 복잡도는 O(nlogn)이다.

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    // 1. cin , cout 과 연결되어 있는 scanf , printf와의 동기화를 끊어
    // 독립적으로 사용하여 입출력 속도를 높인다.
    cin.tie(NULL);
    // cin 과 cout 은 연결되어 있는데 이를 끊음으로써 입출력 속도를 높인다.
    int N;
    cin >> N; // 점의 개수를 입력받는다.

    vector<pair<int, int>> points(N); // new! 아에 좌표를 받을 수 있는 pair를 이용한다.
    // 첫번째가 X좌표 , 두번재가 Y좌표이다.

    for (int i = 0; i < N; i++)
    {
        cin >> points[i].first >> points[i].second; // 입력받은 좌표를 pair에 저장한다.
    }
    sort(points.begin(), points.end()); // sort 함수를 이용하여 두 점을 정렬한다.

    for (int k = 0; k < N; k++)
    {
        cout << points[k].first << " " << points[k].second << "\n";
        // std::endl 대신 \n 을 사용하면 출력 버퍼를 강제로적으로 플러시 하기 때문에
        // 반복적인 출력을 할 때 더 빠르다.
    }
    return 0;
}