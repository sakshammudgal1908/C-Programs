#include<stdio.h>
#include<conio.h>
void main()
{
    int i , age;
    for(i=1;i<10;i++){
    printf("%d\nEnter your age\n",i);
    scanf("%d",&age);
    if (age>10)
    {
        break;
    }
}
}


OUTPUT

1
Enter your age
4
2
Enter your age
8
3
Enter your age
12
//program is completed now because here the condition becomes false
