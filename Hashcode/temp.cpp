#include<bits/stdc++.h>
using namespace std;
class coder
{   public:
    string name;
    int s;
    vector<string> skill;
    vector<int> level;
};
class project
{   public:
    string pname;
    int day;
    int point;
    int duedate;
    int skillreq;
    vector<string> projectskill;
    vector<int> skilllevel;
};

int main()
{
    coder a[1000];project b[1000];
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].name;
        cin>>a[i].s;
        for(int j=0;j<a[i].s;j++)
        {   string temp;
            cin>>temp;
            a[i].skill.push_back(temp);
            int temp2;
            cin>>temp2;
            a[i].level.push_back(temp2);
        }
    }

     for(int i=0;i<x;i++)
    {
        cin>>b[i].pname;
        cin>>b[i].day;
        cin>>b[i].point;
        cin>>b[i].duedate;
        cin>>b[i].skillreq;
        
        
        for(int j=0;j<b[i].skillreq;j++)
        {   string temp;
            cin>>temp;
            b[i].projectskill.push_back(temp);
            int temp2;
            cin>>temp2;
            b[i].skilllevel.push_back(temp2);
        }


    }
 

}