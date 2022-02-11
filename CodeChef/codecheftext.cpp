#include <iostream>
using namespace std;

int main()
{
    int t,rows,columns,c,d;
    cin>>t;
    while(t--){
    cin>>rows>>columns;
    if((rows%2)==0)
        c=rows/2;
  
    else 
        c=((rows+1)/2);
    
    if((columns%2)==0)
        d=rows/2;
         
    else 
        d=((columns+1)/2);
    
   
    cout<<c*d<<"\n"; 
     
     
     
     }
    
    
return 0;
}