/*
  다음 이차 방정식의 계수 a, b, c와 x 값을 읽어서 방정식 값을 구하는 프로그램을 작성하여라.
f(x) = a * x^2 + b * x + c
단, 출력은 다음과 같이 되도록 하여라.

$ prog
Input a, b, and c : 3 -1 20 (Enter)
Input x : 4 (Enter)
f(4) = 64

$ prog
Input a, b, and c : 4 -2 16 (Enter)
Input x : 5 (Enter)
f(5) = 106
*/

#include <stdio.h>

int main(){
	int a, b, c, x;
	printf("Input a, b, and c : ");
	scanf("%d %d %d", &a, &b, &c);
	printf("Input x : ");
	scanf("%d", &x);
	printf("f(%d) = %d\n", x, a*x*x+b*x+c);
	return 0;
}
