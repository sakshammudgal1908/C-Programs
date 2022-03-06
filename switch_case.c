#include<stdio.h>
void main()
{
    char n;
    printf("Enter n;");
    scanf("%c",&n);
    switch(n)
    {
        case 'a':
        printf("Red\n");
        break;
        case 2:
        printf("blue\n");
        break;
        case 3:
        printf("green\n");
        break;
        default:
        printf("black");
    }

}


OUTPUT

Enter n:2
blue
