#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    printf("Enter the age");
    scanf("%d",&age);
    printf("You have Entered %d as your age\n",age);
    if(age>=18){
        printf("You can vote");
    }
    else if(age>10){
        printf("Your age is between 10-18 , so you can vote for kids");
    }
    else{
        printf("You can not vote");
    }
        
}


OUTPUT

Enter Your age
8
You have entered 8 as your age 
You can not vote

ANOTHER CASE

Enter Your age
12
You have Entered 12 as your age 
Your age is between 10-18 , so you can vote for kids
