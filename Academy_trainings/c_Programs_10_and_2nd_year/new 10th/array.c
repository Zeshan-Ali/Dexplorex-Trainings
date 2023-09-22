#include<conio.h>
#include<stdio.h>
void main()
{
 int age[15];
 for(int j=0;j<=14;j++)
    {
    printf("please enter value for age:");
    scanf("%d",&age[j]);
    }
 for (int i=0;i<=14;i++)
  {
      printf("the age is:%d\n",age[i]);
  }


}
