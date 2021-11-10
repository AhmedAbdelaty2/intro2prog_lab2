#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy1(int x, int y);

int main()
{
    int r=1,c,size,i;

    printf("please, enter the size: ");
    scanf("%d", &size);

    c = (size+1)/2;

    for(i=1;i<=size*size;i++)
    {
        gotoxy1((c)*10,(r)*5);
        //printf("R=%d, C=%d, %d\n", r, c, i);
        printf("%d", i);
        if(i%size)
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

void gotoxy1(int x, int y)
{
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
