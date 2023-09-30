#include<stdio.h>
int find_sq(int numb)
{
 int sq = numb*numb;
 return sq;
}
void main()
{ int s;
 int numb;
 printf("please enter a number:");
 scanf("%d",&numb);
 s = find_sq(numb);
 printf("the square of number is:%d",s);

}
