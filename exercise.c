#include <stdio.h>  
int main()  
{  
    int num, i = 1; 
    printf (" Enter a number to generate the table in C: ");  
    scanf (" %d", &num);  
      
    printf ("\n Table of %d \n ", num);  
      
      
    while (i <= 10)  
    {  
          
        printf (" %d x %d = %d \n", num, i, (num * i));  
        i++;   
    }  
    return 0;  
}  


2*1=2
2*2=4
2*3=6
2*4=8
2*5=10
2*6=12
2*7=14
2*8=16
2*9=18
2*10=20  
