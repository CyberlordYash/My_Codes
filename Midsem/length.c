#include<stdio.h>
int main()
{
char a[100];int length=0;
printf("Enter a string to find its length :");
gets(a);
for(int i=0;a[i]!='\0';i++)
{
    length++;
}
printf("Length of entered string is :\n %d",length);

}