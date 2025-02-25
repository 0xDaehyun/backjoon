#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int sw_num; // 스위치의 개수 , 100이해의 양의 정수이다.

    cin >> sw_num;

    vector<int> arr(sw_num); // 스위치 만큼 배열 생성
    // 0 , 1 로만 이루어진 배열이다. 부정 사용하면 편할듯

    // fill(arr.begin() , arr.end() , 0);

    for (int fill = 0; fill < sw_num; fill++)
    {
        cin >> arr[fill];
    } // 현재의 스위치 값을 입력받는다.

    int person = 0; // 사람의 명수 초기화
    cin >> person;

    int roop = 0;

    do
    {

        int gender = 0;
        int num = 0;

        cin >> gender >> num;

        if (gender == 1) // 남학생일때
        {
            for (int i = num; i <= sw_num; i += num)
            {
                arr[i - 1] = !arr[i - 1];
            }
        }

        if (gender == 2) // 여학생일때
        {

            int reference = num - 1;          // 주의 배열은 0번부터이니 이를 보정 해야한다.
            arr[reference] = !arr[reference]; // 가운데는 변경

            for (int j = 1; reference - j >= 0 && reference + j < sw_num; j++)
            {
                if (arr[reference - j] == arr[reference + j])
                {
                    arr[reference + j] = !arr[reference + j];
                    arr[reference - j] = !arr[reference - j];
                }
                else
                {
                    break;
                }
            }
        }

        roop++;
    } while (roop < person);

    for (int k = 0; k < sw_num; k++)
    {
        cout << arr[k] << " ";
        if ((k + 1) & 20 == 0)
        {
            cout << "\n";
        }
    }

    return 0;
}