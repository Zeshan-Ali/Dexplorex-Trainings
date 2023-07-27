#include<stdio.h>
void main ()
{
    float perc;
    printf("Please enter your percentage: ");
    scanf("%f",&perc);

    // logic

    if(perc >=80)
        printf("grade is A");
    else if(perc >=70)
        printf("grade is b");
    else if(perc >=60)
        printf("grade is c");
    else if(perc >=50)
        printf("grade is d");
    else if(perc >=40)
        printf("grade is e");
    else if(perc >=30)
        printf("grade is f");
    else if(perc >=20)
        printf("grade is nalaiq");
    else
        printf("please enter correct value");


}
