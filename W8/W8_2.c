/*
정수(n)를 입력받아 1부터 n까지 합을 구하는 프로그램을 작성하여라. 음수가 입력되면 계산 없이 프로그램을 종료해야 한다. if와 while 문을 사용한다.

• 프로그램 및 설명 :
*/

#include <stdio.h>
int main(void)
{
    int i=1, n, total=0;
    printf("정수를 입력하라 : ");
    scanf("%d", &n);
    if(n<=0) //n(입력값)이 음수이면 프로그램을 종료
    {
        return 0;
    }
    while(i<=n) //i가 n(입력값)과 같아질 때까지 i를 total에 더한 뒤, i값을 1 증가 시키기를 반복
    {
        total += i; 
        i++;
    }
    printf("1부터 %d까지 합은 %d .", n, total);
    return 0;
}

