#include <stdio.h>

int main(void) {
	int a,t,fact=1,i=1;
	scanf("%d",&t);
	while (t>0)
	{   fact=1;i=1;
	    scanf("%d",&a);
	    while(a--)
	    {
	        fact = fact*i;
	        i++;
	    }
	    t--;
        printf("%d\n",fact);
	}
	
	
	return 0;
}