#include<bits/stdc++.h>
using namespace std;
int main()
{
        string a="My juice is orange in color.";
        string b="orange";
        
        int j=0,count=0,len=a.length(),len2=b.length();
        for(int i=0;i<len;i++)
        {        if(count==len2){break;}
                if(a[i]==b[j]){j++;count++;}
                else
                {count=0;j=0;}
               

        }
        if(count==len2){cout<<"Found";}
        else {cout<<"Not found";}


}