#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r=1,c,size,i;

    printf("please, enter the size: ");
    scanf("%d", &size);

    c = (size+1)/2;

    for(i=1;i<=size*size;i++)
    {
        printf("R=%d, C=%d, %d\n", r, c, i);
        if(i%3)
        {
            r = r-1;
            c = c-1;
            if(c == 0)
                c = size;
            if(r == 0)
                r = size;
        }
        else
        {
            r++;
            if(r>size)
                r = 1;
        }
    }


    return 0;
}
