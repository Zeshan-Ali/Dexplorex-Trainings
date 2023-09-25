#include<stdio.h>
#include<math.h>
void sum()  // declaration of function
{  // body of function
    int a,b;
    printf("enter two numbers for sum:");
    scanf("%d %d", &a,&b);
    int c = a+b;
    printf("the sum of number is:%d",c);
}
void sub()  // declaration of function
{  // body of function
    int a,b;
    printf("enter two numbers for sub:");
    scanf("%d %d", &a,&b);
    int c = a-b;
    printf("the sub of number is:%d",c);
}
void main()
{
    int ch;
    printf("enter choice \n 1.add \n 2.sub");
    scanf("%d",&ch);

    if (ch==1)
        sum(); // calling function
    else if(ch == 2)
        sub();

    else
        printf("invalid response");

int a = 2;
printf("the sqrt of a is:%d", sqrt(a));
}
