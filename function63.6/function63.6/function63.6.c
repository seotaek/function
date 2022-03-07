#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int getNumber(int* a, int* b) {
    *a = 10;
    *b = 20;
    int res = *a + *b;
    return res;
}

int main()
{
    int num1 = 0;
    int num2 = 0;
    int result = 0;

    result = getNumber(&num1, &num2);

    printf("%d %d %d\n", num1, num2, result);

    return 0;
}