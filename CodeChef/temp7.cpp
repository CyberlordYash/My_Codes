#include<stdio.h>
int main()
{
    int maths,phy,chem,sum,sum2;
    printf("Enter marks in maths phy and chem respectively:");
    scanf("%d%d%d",&maths,&phy,&chem);
    sum=maths+phy+chem;
    sum2=maths+phy;

    if(maths>=65&&phy>=55&&chem>=50)
    {
        if(sum>=190||sum2>=140)
        printf("You are eligible for admission");

        else
        printf("You are not eligible");
    }
    else 
    printf("You are not eligible");
}