#include <iostream>
#include <unordered_map>
using namespace std;

class tree
{

private:
public:
    void preorder_traversal()
    { // 전위 순회(preorder traversal)
    }
    void inorder_traversal()
    { // 중위 순회(inorder traversal)
    }
    void postorder_traversal()
    { // 후위 순회(postorder traversal)
    }
};

int main()
{
    int N;
    cin >> N; // 트리의 노드의 개수를 입력받는다.
    tree Tree;
    char arr[N][3]; // 행 최대 26개, 열 최대 3개의 배열을 선언한다.

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j]; // 2차원 배열에 트리를 입력받습니다.
        }
    }

    sort(arr, arr + N); //

    Tree.preorder_traversal();  // 전위 순회 출력하기
    Tree.inorder_traversal();   // 중위 순위 출력 하기
    Tree.postorder_traversal(); // 후위 순위 출력하기

    return 0;
}