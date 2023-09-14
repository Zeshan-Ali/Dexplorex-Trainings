#include<conio.h>
#include<stdio.h>
void main()
{ // this program find grade based on marks
    // percentage
    float percentage;// variable declaration
    printf("Please enter your percentage:");
    scanf("%f",&percentage);
     if (percentage > 80)
        printf("grade is A");
     else if (percentage >70)
        printf("grade is B");
    else if (percentage> 60)
        printf("grade is C");
    else if (percentage> 50)
        printf("grade is D");
    else if (percentage> 40)
        printf("grade is E");
    else if (percentage> 30)
        printf("grade is F");
    else
        printf("invalid entry");


}
