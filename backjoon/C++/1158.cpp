#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    int K;
    cin >> N >> K; // 앉힐 사람의 수

    int *arr = new int[N];    // 원형으로 배열된 사람들을 저장할 배열
    int *answer = new int[N]; // 정답을 저장할 배열
    for (int i = 0; i < N; i++)
    {
        arr[i] = i + 1;
    } // 배열에 숫자를 하나씩 넣는다

    int D = 0;        // 현재 순회 카운트
    int num = 0;      // 제거된 사람의 수
    int free_set = 0; // 현재 탐색 위치

    // 제거 과정
    while (num < N)
    { // 모든 사람이 제거될 때까지
        if (arr[free_set] != -1)
        { // 삭제되지 않은 사람만 카운트
            D++;
        }

        if (D == K)
        {                                // K번째 사람을 제거
            answer[num] = arr[free_set]; // 제거된 사람 저장
            arr[free_set] = -1;          // 제거된 상태로 표시
            num++;                       // 제거된 사람 수 증가
            D = 0;                       // 카운트 초기화
        }

        free_set = (free_set + 1) % N; // 원형 배열처럼 순환
        // 나머지 값을 이용하여 원형 순환으로 하는 것처럼 보인다
    }

    // 출력 부분
    cout << "<";
    for (int h = 0; h < N; h++)
    {
        if (h > 0)
            cout << ", ";
        cout << answer[h];
    }
    cout << ">";

    delete[] arr;    // 메모리 해제는 필수사항!
    delete[] answer; // 메모리 해제는 필수사항!

    return 0;
}

// push , pop 을 이용하여 풀기