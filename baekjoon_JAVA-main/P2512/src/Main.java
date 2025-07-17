import java.util.*;

public class Main {
    public static void main(String[] agrs){
        Scanner sc = new Scanner(System.in);


        int N = sc.nextInt(); // 지방의 수  , 1 < N < 100,000.

        int [] arr = new int[N]; // 배열 선언후 이를 입력시킨다.

        for(int i = 0; i < N ; i++){ // 필요한 예산 입력받기.
            arr[i] = sc.nextInt();
        }
        int total = sc.nextInt(); // 총 예산을 입력받는다.

        int compare = 0 ;

        // 이후 알고리즘의 핵심 : 필요한 예산을 기준으로 주어진 예산에 맞게 각 지방의 예산 상한 금액을 조정한다.

        for(int i = 0; i < N ; i++){ // 필요한 예산 입력받기.
            compare += arr[i];
        }
        if(compare <= total){
            System.out.println(compare);
        }// 예산 안쪽이면 그냥 바로 리턴하기.


    }
}
