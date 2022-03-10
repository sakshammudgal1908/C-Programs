#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int i, age;
    for (i=0; i<10; i++){
        printf("%d\nEnter your age\n", i);
        scanf("%d", &age);
        
        if (age>10)
        {
            continue;
        }
        printf("we have not come accross any continue statements\n");
        printf("we have not come accross any continue statements\n");
        printf("we have not come accross any continue statements\n");
        printf("we have not come accross any continue statements\n");
        printf("Harry is a good boy");
        
    }
    
    return 0;
}

OUTPUT

Enter your age 
12
2
Enter your age
16
3
Enter your age
4
we have not come accross any continue statements
we have not come accross any continue statements
we have not come accross any continue statements
we have not come accross any continue statements
Harry is a good boy
