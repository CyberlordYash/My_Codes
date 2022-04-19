#include <stdio.h>
int main(){
int n;
printf("Enter the number.\n");
scanf("%d", &n);
switch(n%2){
case 0: printf("Divisible by 2.\n");
break;
default: printf("Not divisible by 2.\n");
}
switch(n%7){
case 0: printf("Divisible by 7.\n");
break;
default: printf("Not divisible by 7.\n");
}
switch(n%11){
case 0: printf("Divisible by 11.\n");
break;
default: printf("Not divisible by 11.\n");
}
return 0;
}
