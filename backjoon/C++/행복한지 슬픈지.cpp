#include <iostream>
#include <cstring> 
using namespace std;

int main() {

char A[255]; 
cin.getline(A, 255); //공백 포함해서 전체 문자열을 입력받는다 .


 int sad = 0 ;  // 슬픔 이모티콘 개수 
 int happy = 0; // 행복 이모티콘 개수
 
 int length = strlen(A); 

for(int i = 0; i < length - 2; i ++){ 
if (A[i] == ':'  && A[i + 1] == '-' && A[i + 2] == ')') {
   happy ++; 
}
else if (A[i] == ':'  && A[i + 1] == '-' && A[i + 2] == '(') {
   sad ++; 
}
} 

 if (happy > 0 && happy == sad) {
cout << "unsure" << "\n";
}
 else if (happy == 0  && sad == 0) {
cout << "none" << "\n";
}
 else if (happy > sad) {
cout << "happy" << "\n";
}
 else if (happy < sad) {
cout << "sad" << "\n";
}


    return 0;
}