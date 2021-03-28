/*
   다음과 같이 두 개의 정수를 입력하면 그 곱의 결과를 출력하는 프로그램을 작성하여라. 
    
Input numbers : 9  8 (Enter)
9 * 8 = 72
*/

#include <stdio.h>
int main(void){
int a, b, mul;

printf("Input numbers : ");
scanf("%d %d", &a, &b);

mul = a*b;
printf("%d * %d = %d\n", a, b, mul);
return 0;
}
