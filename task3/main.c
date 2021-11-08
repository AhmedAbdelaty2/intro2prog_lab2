#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c, temp, x1, x2, img1, img2, real;

    printf("Please, Enter the values:\na = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);

    temp = sqrt(b*b - 4*a*c);
    //printf("%d", temp);

    if(temp>0)
    {
        x1 = -b+sqrt((b*b)-4*a*c)/2*a;
        x2 = -b-sqrt((b*b)-4*a*c)/2*a;

        printf("x1 = %d\nx2 = %d", x1, x2);
    }
    else if(temp<0)
    {
        real = -b/2*a;
        img1 = sqrt((b*b)-4*a*c)/2*a;
        img2 = -img1;

        printf("x1 = real(%d) + imaginary(%d)\n", real, img1);
        printf("x2 = real(%d) - imaginary(%d)", real, img2);

    }
    else
    {
        x1 = -b/2*a;
        printf("x1 = %d\nx2 = %d", x1, x1);
    }

    return 0;
}
