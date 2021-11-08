#include <stdio.h>
#include <stdlib.h>

int main()
{
    int in,sum=0;

    printf("Please, enter the numbers:\n");
    while(sum<100)
    {
        scanf("%d", &in);
        sum+=in;
    }
    return 0;
}
