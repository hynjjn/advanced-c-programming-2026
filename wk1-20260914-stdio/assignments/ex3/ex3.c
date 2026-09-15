#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("title 세제곱과 나눗셈 연산");

    printf("2022322020 선현진\n");

    int num1, num2, triple;
    float division;

    printf("정수값 2개 입력 : ");
    scanf_s("%d %d", &num1, &num2);

    triple = num1 * num1 * num1;
    division = (float)num1 / num2;

    printf("세제곱 연산 결과 : %d * %d * %d = %08d\n", num1, num1, num1, triple);
    printf("나눗셈 연산 결과 : %d / %d = %08.3f\n", num1, num2, division);

    return 0;
}
