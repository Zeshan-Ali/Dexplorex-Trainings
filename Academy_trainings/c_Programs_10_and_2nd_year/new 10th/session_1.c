#include<stdio.h>
#include<conio.h>
void main()
{
  float marks_perc ;// variable declartation
  int gender; // y wali line b variable ko declare krti h

  printf("please enter your percentage");
  scanf("%f",&marks_perc);
  printf("please enter your gender (enrter 0 for male 1 for female):");
  scanf("%d",&gender);

  if (gender == 0)
  {
   if(marks_perc >80)
   {
       printf("you are eligible");
   }
   else
   {
       printf("you are not eligible");
   }
  }
  else
  {
      printf("you are not a male");
  }




}
