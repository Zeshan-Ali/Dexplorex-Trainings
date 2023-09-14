#include<stdio.h>
#include<conio.h>
void main()
{
    //this program is for finding eligibi
    // of student
    float percnt; // variable declaration
     printf("enter your percentage:");
    scanf("%f",&percnt);
    if(percnt>80)
        printf("grade is A");
    else if(percnt>70)
        printf("grade is B");
    else if(percnt>60)
        printf("grade is C");
    else if(percnt>50)
        printf("grade is D");
    else if(percnt>40)
        printf("grade is E");
    else if(percnt>30)
        printf("grade is F");
    else
        printf("enter valid percemtage");


}
