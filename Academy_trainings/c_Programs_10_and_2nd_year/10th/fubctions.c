#include<stdio.h>
#include<conio.h>
int square(int a)// func heder
{// body

    int sq= a*a;
    return sq;
}
void main()
{
    int s = square(8);
    printf("the square of no is:%d",s);
}
