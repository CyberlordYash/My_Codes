#include<stdio.h>
int main(){
int const X=0;
switch(X){
case 1: printf("Clinton");
break;
case X+1:printf("Gandhi");
break;
case X+2:printf("Gates");
break;
default: printf("Brown");
}
return 0;
}