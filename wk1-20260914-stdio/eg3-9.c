#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char val[] = "Visual-C++";
    printf("|%s|", val);
    printf(": 문자열형 기본 자릿수\n");

    printf("|%12s|", val);
    printf(": 전체 12자리, 오른쪽 정렬\n");

    printf("|%-12s|", val);
    printf(": 전체 12자리, 왼쪽 정렬\n");

    return 0;
}