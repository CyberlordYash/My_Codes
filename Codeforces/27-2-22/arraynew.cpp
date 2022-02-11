#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--)
    {int num; 
    cin>>num;
    vector<int> a(num);
        for(int i = 0; i<num; i++){cin>>a[i];
        }
        int x = a[num-1],count = 0;
        int len = 1,temp = num-2;
        while(temp>=0){
            while(temp>=0&&a[temp]==x)
            {
            len++;
            temp--;
            }
            if(temp<0)break;
            count++;
            temp = temp-len;
            len=len*2;
        }
        cout<<count<<"\n";
    }
}