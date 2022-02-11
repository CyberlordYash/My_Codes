#include<iostream>
using namespace std;
int main()
{
    int t,n,count,temp1=0,num;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    { scanf("%d",&n);
    if(n<=3)num=n;
    else {
    for(int a=n-1;a>0;a--)
    {   count=0;
        if(n%a==0){ 
        for(int temp=a;temp>0;temp--){
            if(a%temp==0)count++;
            
        }
        if(count>=temp1){
        temp1=count;
        num=a;
        
        }

    }
        
    }
    }
    
    printf("%d\n",num);


    }

}