#include <stdio.h>

int main(int argc, char const *argv[])
{
    double x1,y1,x2,y2,x3,y3;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    printf("%lf %lf", (x1 + x2 + x3) / 3, (y1 + y2 + y3) / 3);
    return 0;
}
