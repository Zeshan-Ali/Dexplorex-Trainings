#include<conio.h>
#include<stdio.h>
void main()
{
 // array is consecutive memory locations to store data of same
 // type
 int marks[4];
 printf("please enter markks of students:");
 scanf("%d %d %d %d",&marks[0],&marks[1],&marks[2],&marks[3]);

 int total = marks[0]+marks[1]+marks[2]+marks[3];

 printf("he total marks is:%d",total);


}
