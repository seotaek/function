#include <stdio.h>
int add(int a, int b)    // int형 반환값, int형 매개변수 두 개
{
    return a + b;
}

void executer(int(*fp)(int, int)) {
    printf("%d\n", fp(10, 20));
}

int main() {
    executer (add);

    return 0;
}