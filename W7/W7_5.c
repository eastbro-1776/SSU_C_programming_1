/*
다음과 같은 출력 결과가 나오는 프로그램을 작성하여라. (2점)

연필 개수를 입력하세요 : 43
연필 43자루는 3다스, 7자루입니다.
*/

//• 프로그램 :

#include <stdio.h>
int main(void)
{
    int pencil;
    printf("연필 개수를 입력하세요 : ");
    scanf("%d", &pencil);
    printf("연필 %d자루는 %d다스, %d자루입니다.\n", pencil, pencil/12, pencil%12);
    return 0;
}
