#include <stdio.h>

void main()

{
    int marks;
    printf("ENTER YOUR MARKS\n");
    scanf("%d", &marks);
    if(marks<0 || marks>100)
    {
        printf("Wrong Entry");
    }
    else if(marks>=70 && marks<100)
    {
        printf("Your Grade is A");
    }
    else if(marks>=60 && marks<70)
    {
        printf("Your Grade is B");
    }
    else if(marks>=50 && marks<60)
    {
        printf("Your Grade is C");
    }
    else if(marks>=40 && marks<50)
    {
        printf("Your Grade is D");
    }
    else
    {
        printf("Your Grade is E");
    }
}
