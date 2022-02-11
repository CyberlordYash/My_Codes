#include<iostream>
using namespace std;
int main()
{
    int n,b,tempn,tempb,counta=0,countb=0,ispresent;
    cin>>n>>b;
    tempn=n;
    while(tempn)
    {tempb=b;
        int temp=tempn%10;
        while(tempb)
        {
            if(temp==(tempb%10)){
                ispresent =1;countb++;break;
            }
            else{
                tempb=tempb/10;
            }
        counta++;
        tempb=tempb/10;
        }
        tempn=tempn/10;

    }
    cout<<countb;
}