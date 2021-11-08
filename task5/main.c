#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int x;

    printf("1 print\n2 edit\n3 save\n");
    scanf("%d", &x);

    while(1)
    {
        switch(x)
        {
        case 1:
            system("cls");
            printf("Print\n");
            break;

        case 2:
            system("cls");
            printf("edit\n");
            break;

        case 3:
            system("cls");
            printf("save\n");
            break;

        default:
            system("cls");
            printf("1 print\n2 edit\n3 save\n");
            scanf("%d", &x);
            continue;
        }
        break;
    }
    return 0;
}
