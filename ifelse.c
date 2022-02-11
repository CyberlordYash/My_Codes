#include<stdio.h>
int main()
{
int n;
printf("enter number");
scanf("%d",&n);
if(n>=90){printf("Grade is A");}
else if(n>=80){printf("Grade is B");}
else if(n>=70){printf("Grade is C");}
else if(n>=60){printf("Grade is D");}
else if(n>=50){printf("Grade is E");}
else {
    printf("Fail");
}



}