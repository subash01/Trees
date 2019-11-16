#include <bits/stdc++.h>

using namespace std;


int main()
{
    int alice[100],bob[100],i,result[2],a=0,b=0;
    for(i=0;i<3;i++)
    {
        cin>>alice[i];
    }
    for(i=0;i<3;i++)
    {
        cin>>bob[i];
    }
    for(i=0;i<3;i++)
    {
        if(alice[i]>bob[i])
        {
            a+=1;
        }
        else if(alice[i]<bob[i])
        {
            b+=1;
        }
        else if(alice[i]==bob[i])
        {
            a+=0;
            b+=0;
        }

    }
    cout<<a<<" ";
    cout<<b;
 }

