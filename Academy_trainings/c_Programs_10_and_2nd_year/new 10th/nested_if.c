#include<stdio.h>
void nested_if()
{
    int age, marks;
    printf("please enter your age:");
    scanf("%d",&age);


    if(age>18)
    {
        printf("please enter you marks:");
        scanf("%d",&marks);
        if(marks>850)
        {
            printf("you are eligible:");

        }
        else
        {
            printf("your marks are low");
        }
    }
    else
    {
        printf("you are too young");
    }

}
void main()
{
  nested_if();

}
