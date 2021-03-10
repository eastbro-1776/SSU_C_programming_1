/* 
다음 프로그램은 상수 7억 곱하기 7억을 출력하는 프로그램이다. 
출력 결과가 올바르게 나오도록 프로그램을 수정하여라. 

#include <stdio.h>
int main(void) {
   long long big;
   big = 700000000 * 700000000;
   printf(“%d”, big);
   return 0;
}

올바른 출력 결과 : 490000000000000000
*/

#include <stdio.h>

int main(){
	long long big;
	long long a = 700000000;
	long long b = 700000000; 
	big = a * b;
	printf("%lld", big);
	return 0;
}

/*
아래의 코드와 출력 결과가 같다.

#include <stdio.h>

int main(){
	long long big;
	big = 700000000LL * 700000000;
	printf("%lld", big);
	return 0;
}
*/
