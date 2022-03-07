#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct Point2D {
    int x;
    int y;
};

float getDistance(struct Point2D a, struct Point2D b) {
    int x = a.x - b.x;
    int y = a.y - b.y;
    double res = sqrt((x * x) + (y * y));
    return res;
}



int main()
{
    struct Point2D p1;
    struct Point2D p2;

    scanf("%d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y);

    printf("%f\n", getDistance(p1, p2));

    return 0;
}