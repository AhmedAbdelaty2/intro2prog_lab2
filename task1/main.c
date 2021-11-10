#include <stdio.h>
#include <stdlib.h>

int main()
{
    int in,max=0,min=2147483647,i;


    printf("Please, enter the five numbers\n");
    for(i=0;i<5;i++)
    {
        scanf("%d", &in);

        if(max<in)
            max = in;
        if(min>in)
            min = in;
    }

    printf("the maximum number is %d and the minimum is %d", max, min);

    return 0;
}
