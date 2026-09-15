#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("title 알파벳과 아스키코드값");

    printf("2022322020 선현진\n");

    char alpha;

    printf("알파벳 입력 : ");
    scanf_s("%c", &alpha, 1);

    printf("입력한 알파벳 : %c\n", alpha);
    printf("알파벳 아스키코드값 : %d\n", alpha);
    printf("입력한 알파벳 + 8 : %c\n", alpha + 8);
    printf("프로그램을 종료합니다.\n");

    return 0;
}
